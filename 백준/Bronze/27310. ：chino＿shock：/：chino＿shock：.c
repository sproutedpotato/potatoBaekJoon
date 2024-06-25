#include <stdio.h>
#include <string.h>

int main(void) { 
   char a[33];
   scanf("%s", a);

   int count_colon = 0, count_underbar = 0;
   for(int i = 0; i < strlen(a); i++){
      if(a[i] == ':'){
         count_colon += 1;
      }
      else if(a[i] == '_'){
         count_underbar += 1;
      }
   }

   printf("%d", (int)strlen(a) + count_colon + count_underbar * 5);

   return 0;
}