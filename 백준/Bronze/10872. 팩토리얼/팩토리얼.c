#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   int num = 1;
   for(int i = 1; i < a + 1; i++){
      num *= i;
   }

   printf("%d", num);
   
   return 0;
}