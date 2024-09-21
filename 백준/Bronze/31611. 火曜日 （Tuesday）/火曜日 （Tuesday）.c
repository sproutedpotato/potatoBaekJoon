#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   if(a % 7 == 2)   printf("1");
   else   printf("0");
   
   return 0;
}