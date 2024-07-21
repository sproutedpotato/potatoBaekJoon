#include <stdio.h>
#include <string.h>

int main(void) { 
   char bit[33];

   while(1){
      int num = 0;
      scanf("%s", bit);
      if(strcmp(bit, "#") == 0){
         break;
      }

      int length = strlen(bit);

      for(int i = 0; i < length - 1; i++){
         if(bit[i] == '1'){
            num += 1;
         }
         printf("%c", bit[i]);
      }

      if(bit[length - 1] == 'e'){
         if(num % 2 == 0){
            printf("0");
         }
         else{
            printf("1");
         }
      }
      else{
         if(num % 2 == 0){
            printf("1");
         }
         else{
            printf("0");
         }
      }
      printf("\n");
   }
   
   return 0;
}