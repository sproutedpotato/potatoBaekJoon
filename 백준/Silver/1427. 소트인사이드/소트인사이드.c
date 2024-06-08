#include <stdio.h>
#include <string.h>

int main(void) { 
   char str[11];
   scanf("%s", str);
   int length = strlen(str);

   for(int i = 0; i < length - 1; i++){
      for(int j = i; j < length; j++){
         if((int)str[i] < (int)str[j]){
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
   }

   printf("%s", str);

   return 0;
}