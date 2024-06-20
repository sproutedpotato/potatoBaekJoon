#include <stdio.h>

int main(void) { 
   float a, b;
   scanf("%f %f", &a, &b);

   printf("%.1f", a * b / 2.0);

   return 0;
}