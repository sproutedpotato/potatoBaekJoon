#include <stdio.h>

int main(void) { 
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);

   printf("%d", (b / a) * c * 3);

   return 0;
}