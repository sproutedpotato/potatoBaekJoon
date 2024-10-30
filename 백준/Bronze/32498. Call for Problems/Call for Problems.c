#include <stdio.h>

int main(void) { 
   int a, b, result = 0;
   scanf("%d", &a);
   
   for(int i = 0; i < a; i++){
      scanf("%d", &b);

      if(b % 2 != 0)   result += 1;
   }

   printf("%d", result);
   
   return 0;
}