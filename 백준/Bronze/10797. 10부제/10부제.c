#include <stdio.h>

int main(void) { 
   int a, result = 0;
   scanf("%d", &a);

   int num[5] = {0};
   for(int i = 0; i < 5; i++){
      scanf("%d", &num[i]);
   }

   for(int i = 0; i < 5; i++){
      if(a == num[i]){
         result += 1;
      }
   }

   printf("%d", result);
   
   return 0;
}