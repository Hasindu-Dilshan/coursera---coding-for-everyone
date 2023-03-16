#include <stdio.h>
#include <stdlib.h>

int main() {
    // Open the file for reading
    FILE *fp = fopen("input.txt", "r");

    // Read the first integer from the file, which tells us how many integers to read
    int num_ints;
    fscanf(fp, "%d", &num_ints);

    // Create an array of the appropriate size
    int *data = malloc(num_ints * sizeof(int));

    // Read the remaining integers into the array
    for (int i = 0; i < num_ints; i++) {
        fscanf(fp, "%d", &data[i]);
    }

    // Close the file
    fclose(fp);

    // Compute the average and max
    double avg = 0;
    int max = data[0];
    for (int i = 0; i < num_ints; i++) {
        avg += data[i];
        if (data[i] > max) {
            max = data[i];
        }
    }
    avg /= num_ints;

    // Print the results to the screen
    printf("Average: %f\nMax: %d\n", avg, max);

    // Print the results to a file
    FILE *fp_out = fopen("answer-hw3.txt", "w");
    fprintf(fp_out, "Average: %f\nMax: %d\n", avg, max);
    fclose(fp_out);

    // Free the array
    free(data);

    return 0;
}