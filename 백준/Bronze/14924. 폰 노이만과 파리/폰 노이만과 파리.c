#include <stdio.h>

int main(void) { 
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);

   printf("%d", (c / (a * 2)) * b);

   return 0;
}