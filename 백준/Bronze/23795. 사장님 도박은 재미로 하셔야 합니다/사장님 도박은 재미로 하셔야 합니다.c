#include <stdio.h>

int main(void) { 
   int a;
   int sum = 0;
   while(1){
      
      scanf("%d", &a);
      if(a == -1){
         break;
      }
      sum += a;
   }
   printf("%d", sum);

   return 0;
}