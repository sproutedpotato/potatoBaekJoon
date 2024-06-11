#include <stdio.h>

int main(void) { 
   int a, result = 0;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      int plug;
      scanf("%d", &plug);

      if(i == a - 1){
         result += plug;
      }
      else{
         result += plug - 1;
      }
   }

   printf("%d",result);

   return 0;
}