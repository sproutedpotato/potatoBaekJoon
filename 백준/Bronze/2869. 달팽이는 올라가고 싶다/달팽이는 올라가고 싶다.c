#include <stdio.h>
#include <math.h>

int main(void) {  
   double a, b, c;
   scanf("%lf %lf %lf", &a, &b, &c);

   double k = (c - b) / (a - b);

   int result = ceil(k);

   printf("%d", result);

   return 0;
}