#include <stdio.h>
#include <string.h>

int main(void) {   
   int buf = 1000002;
   char str[buf];
   fgets(str, buf, stdin);

   int result = 1;

   int length = strlen(str);
   for(int i = 0; i < length; i++){
      if(str[i] == ' '){
         result += 1;
      }
   }

   if(str[0] == ' '){
      result -= 1;
   }
   
   if(str[length - 2] == ' '){
      result -= 1;
   }
   printf("%d", result);
   
   return 0;
}