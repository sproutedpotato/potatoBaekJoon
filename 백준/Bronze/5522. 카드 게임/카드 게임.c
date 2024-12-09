#include <stdio.h>

int main(void) { 
   int a, sum = 0;

   for(int i = 0; i < 5; i++){
      scanf("%d", &a);
      sum += a;
   }

   printf("%d", sum);
   
   return 0;
}