#include <stdio.h>

int main(void) {  
   char arr[4];
   scanf("%s", arr);

   for(int i = 2; i > -1; i--) {
      printf("%c", arr[i]);
   }
   
   return 0;
}