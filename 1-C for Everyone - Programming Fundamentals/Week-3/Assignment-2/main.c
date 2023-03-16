// C Program : trig_table.c
// Program displays angle, sine and cosine in a table

#include <stdio.h>
#include <math.h>

#define PI 3.14

void display_table(void);

int main(void){ // Function main begines program execution
  display_table(); // Call display_table function

  return 0;
} // End of main function

void display_table(void){
  float angle;

  puts("angle(rad) \tsine\tcosine"); // Table heading 

  for(angle = 0; angle < PI / 2.0; angle += 0.05){ // Loop in the range (0,1) for sine and cosine values
    printf("%.2f\t\t%.2f\t%.2f\n", angle, sin(angle), cos(angle)); // Display values
  }
}
