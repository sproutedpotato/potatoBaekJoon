#include <stdio.h>
#include <string.h>

int main(void) { 
   char str[51];
   char result[51] = "";
   scanf("%s", str);

   int count = 0;
   int length = strlen(str);

   for(int i = 0; i < length; i++){
      if(str[i] != '.'){
         count++;
      }
      if(str[i] == '.' || i == length - 1){
         if(count % 2 == 1){
            printf("-1");
            return 0;
         }
         else{
            while(count > 0){
               if(count - 4 >= 0){
                  strcat(result, "AAAA");
                  count -= 4;
               }
               else{
                  strcat(result, "BB");
                  count -= 2;
               }
            }
            if(str[i] == '.'){
               strcat(result, ".");
            }
         } 
      }
   }

   printf("%s", result);
   
   return 0;
}