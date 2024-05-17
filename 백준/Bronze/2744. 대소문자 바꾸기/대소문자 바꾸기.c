#include <stdio.h>
#include <string.h>

int main(void) {   
   char str[101];
   scanf("%s", str);

   int length = strlen(str);
   for(int i = 0; i < length; i++){
      if((int)str[i] >= 95){
         str[i] = (int)str[i] - 32;
      }
      else{
         str[i] = (int)str[i] + 32;
      }
   }

   for(int i = 0; i < length; i++){
      printf("%c", (char)str[i]);
   }

   return 0;
}