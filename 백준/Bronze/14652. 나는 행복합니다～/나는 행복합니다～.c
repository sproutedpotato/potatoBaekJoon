#include <stdio.h>

int main(void) { 
   int a, b, c, index = 0;
   scanf("%d %d %d", &a, &b, &c);

   printf("%d %d", c / b, c % b);
   
   return 0;
}