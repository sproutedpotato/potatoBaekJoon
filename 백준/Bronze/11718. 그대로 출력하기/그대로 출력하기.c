#include <stdio.h>

int main(void) {   
   char str[101];
   while(scanf(" %[^\n]s", str) != (char)EOF){
      printf("%s\n", str);
   }
   
   return 0;
}