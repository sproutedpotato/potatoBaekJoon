#include <stdio.h>

int main(void) { 
   int a, b, c, d;
   scanf("%d %d %d %d", &a, &b, &c, &d);

   if(a + d > b + c)   printf("%d\n", (a + d) - (b + c));
   else   printf("%d\n", (b + c) - (a + d));
   

   return 0;
}