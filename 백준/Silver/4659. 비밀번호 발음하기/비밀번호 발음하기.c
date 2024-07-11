#include <stdio.h>
#include <string.h>

int main(void) { 
   char str[21];
   
   while(1){
      int flag = 0, vowel = 0, consonant = 0;
      char prev;
      scanf("%s", str);
      if(strcmp(str, "end") == 0){
         break;
      }

      for(int i = 0; i < strlen(str); i++){
         if(str[i] == 'o' || str[i] == 'e' || str[i] == 'i' || str[i] == 'a' || str[i] == 'u'){
            flag = 1;
            vowel += 1;
            consonant = 0;
         }
         else{
            consonant += 1;
            vowel = 0;
         }
         if(i != 0 && str[i] != 'e' && str[i] != 'o'){
            if(str[i] == prev){
               flag = 0;
               break;
            }
         }
         if(vowel >= 3 || consonant >= 3){
            flag = 0;
            break;
         }

         prev = str[i];
      }

      if(flag){
         printf("<%s> is acceptable.\n", str);
      }
      else{
         printf("<%s> is not acceptable.\n", str);
      }
   }

   return 0;
}