#include <stdio.h>

int main(void) { 
   char a;
   scanf("%c", &a);

   if(a == 'n' || a == 'N') {
      printf("Naver D2");
   }
   else{
      printf("Naver Whale");
   }

   return 0;
}