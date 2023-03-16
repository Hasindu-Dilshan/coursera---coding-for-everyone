#include <stdio.h>

void store_weights(int weights[], int SIZE); 
double total_weight(int weights[], int SIZE);

int main(void) {	// Function main begines program execution
	const int SIZE = 600; // maximum number of weights

	int weights[SIZE];
	double avg;

	store_weights(weights, SIZE);  // Store input from stdin

	avg = total_weight(weights, SIZE) / SIZE;  // Calculate average;

	printf("Average = %.2f\n", avg); // Show average value

	return 0;

}  // End of main function

void store_weights(int weights[], int SIZE) {	// Store input into given array
	int i, input;

	printf("Enter weights: ");

	for(i = 0; i < SIZE; i++) {
		scanf("%d", &weights[i]);
	}

} // End of store_weights function

double total_weight(int weights[], int SIZE) { // Returns total weight
	int i;
	double sum = 0;

	for(i = 0; i < SIZE; i++) {
		sum += weights[i];
	}

	return sum;

} // End of total_weights function
