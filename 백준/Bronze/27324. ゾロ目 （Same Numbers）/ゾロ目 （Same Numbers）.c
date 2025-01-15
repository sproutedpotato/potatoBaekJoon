#include <stdio.h>

int main(void) { 
   char str[3];
   scanf("%s", str);

   if(str[0] == str[1]){
      printf("1");
   }
   else   printf("0");

   return 0;
}