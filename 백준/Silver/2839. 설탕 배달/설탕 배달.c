#include <stdio.h>

int main(void) { 
   int a, bag = 0;
   scanf("%d", &a);

   while(1){
      if(a == 0){
         break;
      }
      if(a < 0){
         printf("-1\n");
         return 0;
      }
      else if(a % 5 == 0){
         bag += a / 5;
         break;
      }

      a -= 3;
      bag += 1;
   }

   printf("%d", bag);
   
   return 0;
}