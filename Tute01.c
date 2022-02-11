/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
   int sum;
   float average;
   
   printf("Enter First mark :");
   scanf("%d" ,@mark1);
   printf("Enter Second mark :");
   scanf("%d" ,@mark2);
   
   sum = mark1 + mark2;
   average = sum / 2.0;
   
   printf("Average of the two marks : %.2f" , average);
   
  return 0;
}

