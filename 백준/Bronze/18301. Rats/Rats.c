#include <stdio.h>

int main(void) { 
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   
   int result = ((a + 1) * (b + 1)/(c + 1)) - 1;

   printf("%d", result);
   
   return 0;
}