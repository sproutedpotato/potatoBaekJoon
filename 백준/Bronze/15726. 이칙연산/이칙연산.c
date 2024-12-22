#include <stdio.h>

int main(void) { 
   double a, b, c;
   scanf("%lf %lf %lf", &a, &b, &c);

   int r1 = a * b / c;
   int r2 = a / b * c;

   if(r1 > r2)   printf("%d", r1);
   else   printf("%d", r2);
   
   return 0;
}