#include <stdio.h>
#include <string.h>

int main(void) { 

   while(1){
      char str[102], prev[102];
      int Circle = 0, Square = 0, flag = 1, index = 0;
      fgets(str, 102, stdin);

      if(strcmp(str, ".\n") == 0) break;

      for(int i = 0; i < strlen(str); i++){
         if(Circle < 0 || Square < 0){
            flag = 0;
            break;
         }

         if(str[i] == ')' && prev[index] == '['){
            flag = 0;
            break;
         }
         else if(str[i] == ']' && prev[index] == '('){
            flag = 0;
            break;
         }
         
         if(str[i] == '('){
            Circle++;
            index += 1;
            prev[index] = '(';
         }
         else if(str[i] == '['){
            Square++;
            index += 1;
            prev[index] = '[';
         }
         else if(str[i] == ')'){
            Circle--;
            index--;
         }   
         else if(str[i] == ']'){
            Square--;
            index--;
         }         
      }

      if(Circle == 0 && Square == 0 && flag) printf("yes\n");
      else   printf("no\n");
      
   }
   
   return 0;
}