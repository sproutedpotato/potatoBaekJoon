#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);
   long result = 1;

   for(int i = 0; i < a; i++){
      result *= (i + 1);
   }

   printf("%ld", result);

   return 0;
}