/*
	A program to calculate the area of a circle
	29.06.2021
*/

#include <stdio.h>

#define PI 3.14159

int main(void){
	double area = 0.0, radius = 0.0;
	
	printf("Enter radius : ");	//	prompt
	scanf("%lf", &radius);		//	read input
	
	area = PI * radius * radius;	//	calculate the area
	
	printf("Area of the circle = %.2lf\n", area);	//	display the area
	
	return 0;
}
