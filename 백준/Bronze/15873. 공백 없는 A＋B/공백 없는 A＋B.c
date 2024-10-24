#include <stdio.h>

int main(void) { 
   int a, result = 0;
   scanf("%d", &a);

   if(a % 10 == 0){
      if(a < 1000){
         result += a / 100 + a % 100;
      }
      else{
         result = 20;
      }
   }
   else{
      if(a < 100){
         result += a % 10 + a / 10;
      }
      else{
         result += a % 10 + a / 10;
      }
   }
   

   printf("%d", result);
   
   return 0;
}