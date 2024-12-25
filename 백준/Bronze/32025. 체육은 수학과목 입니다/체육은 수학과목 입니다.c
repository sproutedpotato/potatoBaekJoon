#include <stdio.h>

int main(void) { 
   int a, b;
   scanf("%d", &a);
   scanf("%d", &b);
   
   if(a > b)   printf("%d", b * 100 / 2);
   else   printf("%d", a * 100 / 2);
   
   return 0;
}