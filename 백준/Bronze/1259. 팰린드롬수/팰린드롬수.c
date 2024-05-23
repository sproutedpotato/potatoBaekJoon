#include <stdio.h>
#include <string.h>

int main(void) {  
   char num[6];
   int i;

   while(1){
      scanf("%s", num);

      if(num[0] == '0') break;

      for(i = 0; i < strlen(num) / 2; i++){
         if(num[i] != num[strlen(num) - 1 - i]){
            printf("no\n");
            break;
         }
      }
      if(i == strlen(num) / 2) printf("yes\n");
   }
   return 0;
}