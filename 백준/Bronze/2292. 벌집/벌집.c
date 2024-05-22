#include <stdio.h>

int main(void) {  
   int num;
   scanf("%d", &num);

   int room = 1, result = 1;

   while(1){
      if (room < num){
         room += 6 * result;
         result += 1;
      }
      else{
         break;
      }
   }

   printf("%d", result);
   
   return 0;
}