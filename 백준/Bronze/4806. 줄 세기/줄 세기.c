#include <stdio.h>

int main(void) { 
   char ip[101];
   int current = 0;

   while(fgets(ip, sizeof(ip), stdin) != NULL){
      current += 1;
   }

   printf("%d", current);

   return 0;
}