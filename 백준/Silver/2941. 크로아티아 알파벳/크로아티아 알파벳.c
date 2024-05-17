#include <stdio.h>
#include <string.h>

int main(void) {   
   char str[8][3] = {
            {'c', '=', '\0'},{'c', '-', '\0'},
            {'d', 'z', '\0'},{'d', '-', '\0'},
            {'l', 'j', '\0'},{'n', 'j', '\0'},
            {'s', '=', '\0'},{'z', '=', '\0'}
   };

   char String[101];
   scanf("%s", String);

   int result = 0;
   while(1){
      int length = strlen(String);
      if (length == 0){
         break;
      }
      
      for(int i = 0; i < 8; i++){
         if(String[0] == str[i][0] && String[1] == str[i][1] && length > 1){
            if(str[i][0] == 'd' && str[i][1] == 'z' && length >= 3){
               if(String[2] == '='){
                  result += 1;
                  for(int j = 0; j < 3; j++){
                     for(int k = 0; k < length; k++){
                        String[k] = String[k + 1];
                     }
                  }
                  String[length - 2] = '\0';
                  break;
               }
               else{
                  result += 1;
                  for(int i = 0; i < length; i++){
                     String[i] = String[i + 1];
                  }
                  String[length - 1] = '\0';
                  break;
               }
            }
            else if(str[i][0] == 'd' && str[i][1] == 'z' && length < 3){
               result += 1;
               for(int i = 0; i < length - 1; i++){
                  String[i] = String[i + 1];
               }
               String[length - 1] = '\0';
            }
            else{
               result += 1;
               for(int j = 0; j < 2; j++){
                  for(int k = 0; k < length - 1; k++){
                     String[k] = String[k + 1];
                  }  
               }
               String[length - 2] = '\0';
               break;
            }
            
         }
         else if(length == 1){
            result += 1;
            String[0] = '\0';
            break;
         }
      }
      
      if (length == strlen(String)){
         result += 1;
         for(int i = 0; i < length - 1; i++){
            String[i] = String[i + 1];
         }
         String[length - 1] = '\0';
      }      
   }

   printf("%d", result);

   return 0;
}