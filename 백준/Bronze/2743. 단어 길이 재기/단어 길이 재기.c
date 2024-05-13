#include <stdio.h>
#include <string.h>

int main(void) {
   char str[101];

   scanf("%s", str);

   int length = strlen(str);
   
   printf("%d", length);
  
   return 0;
}