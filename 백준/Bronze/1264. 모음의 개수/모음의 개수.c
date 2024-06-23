#include <stdio.h>
#include <string.h>

int main(void) { 
   char string[257];
   while(1){
      fgets(string, sizeof(string), stdin);
      string[strcspn(string, "\n")] = '\0';
      if(strcmp(string, "#") == 0){
         break;
      }
      int length = strlen(string);
      int count = 0;
      for(int i = 0; i < length; i++){
         if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
            count += 1;
         }
      }
      printf("%d\n", count);

   }

   return 0;
}