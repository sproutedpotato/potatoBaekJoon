#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   int first = a - a * 22 / 100;
   int temp = a - a * 8 / 10;
   int second = a * 8 / 10 + temp - temp * 22 / 100;
   
   printf("%d %d", first, second);
   
   return 0;
}