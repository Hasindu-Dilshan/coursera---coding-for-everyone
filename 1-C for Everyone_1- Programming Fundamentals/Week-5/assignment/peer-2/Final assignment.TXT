#include <stdio.h>
double avg_data(double data[],int size)
{
   int i,j,sum=0;
   double avg;
   for(i=0;i<size;i++)
 {   
     sum = sum+data[i];
     }
avg = sum/size;
return avg;
}



int main()     //Main function
{
  int weg = 1000;
  double elephant_seal_data[1000] = {5713,6936,8764,6702,8535,8654,8710,8332,4948,7627,5472,5311 ,7331 ,8719 ,6135,6672 ,5786,7113 ,5292 ,6923 ,5683 ,7020 ,8595 ,8606 ,6837 ,7003,7415};
  double c= avg_data(elephant_seal_data,weg);
  printf("%lf",c);
}