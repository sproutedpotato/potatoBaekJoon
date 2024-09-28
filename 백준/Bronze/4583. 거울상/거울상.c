#include <stdio.h>
#include <string.h>

int main(void) { 
   char letter[11];
   while(1){
      char result[11] = {0};
      int i = 0, index = 0;
      scanf("%s", letter);

      if(strcmp(letter, "#") == 0)   break;

      for(i = strlen(letter) - 1; i >= 0; i--){
         if(letter[i] == 'i' || letter[i] == 'o' || letter[i] == 'w' || letter[i] == 'v' || letter[i] == 'x')
            result[index] = letter[i];

         else if(letter[i] == 'b')   result[index] = 'd';
         else if(letter[i] == 'd')   result[index] = 'b';
         else if(letter[i] == 'p')   result[index] = 'q';
         else if(letter[i] == 'q')   result[index] = 'p';
         else   break;

         index++;
      }

      result[strlen(letter)] = '\0';
      if(i >= 0){
         printf("INVALID\n");
      }
      else{
         printf("%s\n", result);
      }
      
   }
   
   return 0;
}