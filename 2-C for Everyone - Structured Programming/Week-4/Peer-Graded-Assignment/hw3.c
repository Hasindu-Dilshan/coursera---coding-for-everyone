#include <stdio.h>
#include <stdlib.h>

// this function reads a given amount of numbers from a file
void read_numbers(FILE* fptr, int values[], int size) {

	int i;
	for(i = 0; i < size; i++) {
		fscanf(fptr, "%d ", &values[i]);
	}

}

// this function calculates the average of a given list of integers
double calc_average(int values[], int size) {
	double avg;
	int sum = 0;

	int i;
	for(i = 0; i < size; i++) {
		sum += values[i];
	}

	avg = (double) sum / size;

	return avg;
}

// this function finds the maximum of a given list of integers
int find_max(int values[], int size) {
	int max = values[0];

	int i;
	for(i = 1; i < size; i++) {
		if(max < values[i]) {
			max = values[i];
		}
	}

	return max;
}

// function main begines program execution
int main(void) {
	FILE* fptr = fopen("input.txt", "r");

	if(fptr != NULL) { // If file exists and readable, execute this block
		int size; // size of number list

		if(fscanf(fptr, "%d", &size) == 1) { // read the first number and store in size
			int values[size];
			read_numbers(fptr, values, size); // read all the numbers and store in values[]

			double average = calc_average(values, size); // calculate the average value
			int max = find_max(values, size); // find the maximum value

			// display output
			printf("average = %f\nmaximum value = %d\n", average, max);

			FILE* outfptr = fopen("output.txt", "w");
			fprintf(outfptr, "average = %f\nmaximum value = %d\n", average, max);
		}
		else {
			printf("Input file is not structured correctly!");

			return 1;
		}

	}
	else {
		printf("Error occured reading the file!. Exiting...");

		return 1;
	}

	fclose(fptr); // close the file pointer

	return 0;
} // end of main function