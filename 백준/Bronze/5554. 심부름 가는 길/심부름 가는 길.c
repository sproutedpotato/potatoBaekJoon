#include <stdio.h>

int main(void) { 
   int a, sum = 0;
   for(int i = 0; i < 4; i++){
      scanf("%d", &a);
      sum += a;
   }

   printf("%d\n", sum / 60);
   printf("%d", sum % 60);
   
   return 0;
}