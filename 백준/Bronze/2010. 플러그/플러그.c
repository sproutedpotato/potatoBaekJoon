#include <stdio.h>

int main(void) {  
   int a, b;
   scanf("%d", &a);

   int result = 0;
   for(int i = 0; i < a; i++){
      scanf("%d", &b);

      if(i == 0){
         result += b;
      }
      else{
         result = result + b - 1;
      }
   }

   printf("%d", result);

   return 0;
}