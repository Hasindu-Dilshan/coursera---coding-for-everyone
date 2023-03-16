// C Program : main.c
// Display sine function for a given input from 0 - 1

#include <stdio.h>
#include <math.h>

int main(void){ // Function main begines program execution
  float x; // Input
  float sine_val; // Output

  printf("Enter an angle : "); // Prompt
  scanf("%f", &x); // Read input

  sine_val = sin(x); // Calculate the sine value

  // Check if the sine value is not in the range of 0 - 1
  if(sine_val < 0){
    sine_val *= -1; // Convert the sign if value is negative
  }

  printf("Sine of %f is %f\n", x, sine_val); // Display sine value

  return 0;
} // End of main function
