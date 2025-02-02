#include <stdio.h>

int main(void) { 
   int a, b, c;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);

   int k = a + b + c;
   if(k <= 21)   printf("1");
   else   printf("0");

   return 0;
}