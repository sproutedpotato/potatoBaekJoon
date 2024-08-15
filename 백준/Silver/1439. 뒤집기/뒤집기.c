#include <stdio.h>
#include <string.h>

int main(void) { 
   int one = 0, zero = 0;
   char str[1000001];

   scanf("%s", str);

   if(str[0] == '1') one++;
   else zero++;
   
   for(int i = 1; i < strlen(str); i++){
      if(str[i - 1] != str[i]){
         if(str[i] == '1') one++;
         else zero++;
      }
   }

   if(zero < one) printf("%d", zero);
   else printf("%d", one);
   
   return 0;
}