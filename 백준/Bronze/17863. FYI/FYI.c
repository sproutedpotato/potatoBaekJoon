#include <stdio.h>

int main(void) { 
   char num[8];
   scanf("%s", num);

   if(num[0] == '5' && num[1] == '5' && num[2] == '5'){
      printf("YES");
   }
   else{
      printf("NO");
   }

   return 0;
}