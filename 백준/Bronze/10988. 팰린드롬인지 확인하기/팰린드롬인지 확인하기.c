#include <stdio.h>
#include <string.h>

int main(void) {   
   char str[101];
   scanf("%s", str);

   int length = strlen(str);
   str[length] = '\0';

   int isTrue = 1;
   for(int i = 0; i < length / 2; i++){
      if(str[i] != str[length - i - 1]){
         isTrue = 0;
         break;
      }
   }
   
   if(isTrue){
      printf("1");
   }
   else{
      printf("0");
   }
   
   return 0;
}