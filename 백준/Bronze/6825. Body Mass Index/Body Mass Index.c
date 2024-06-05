#include <stdio.h>

int main(void) { 
   float a, b;
   scanf("%f", &a);
   scanf("%f", &b);

   float BMI = a / (b * b);
   if(BMI > 25){
      printf("Overweight\n");
   }
   
   else if(BMI > 18.5 && BMI <= 25.0){
      printf("Normal weight\n");
   }

   else{
      printf("Underweight\n");
   }
   
   return 0;
}