#include <stdio.h>


int main(void) { 
   int a;
   scanf("%d", &a);

   char str[a + 1];
   scanf("%s", str);

   for(int i = 0; i < a; i++) {
      if(str[i] == 'I')   printf("i");
      else   printf("L");
   }

   return 0;
}