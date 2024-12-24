#include <stdio.h>

int main(void) { 
   int a, b;
   scanf("%d %d", &a, &b);

   if(a > b)   printf("%d", 2 * b - 1);
   else   printf("%d", 2 * a - 2);
   
   return 0;
}