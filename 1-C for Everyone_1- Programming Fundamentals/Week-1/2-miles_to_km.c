//	Program : Calculates the number of kilometers in a marothon
//	Date    : 30.06.2021

#include <stdio.h>

int main(void){
	int miles = 26, yards = 385;
	double kilometers;

	kilometers = 1.609 * (miles + yards / 1760.0);	//	Calculate the number of kilometers
	printf("\nA marothon is %lf kilometers.\n\n", kilometers);	// Display the output

	return 0;
}
