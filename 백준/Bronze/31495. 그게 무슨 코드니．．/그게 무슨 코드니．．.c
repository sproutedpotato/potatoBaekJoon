#include <stdio.h>
#include <string.h>

int main(void) { 
   char a[54];
   fgets(a, sizeof(a), stdin);

   if(strlen(a) == 3){
      printf("CE");
   }
   else if(strlen(a) >= 3 && a[0] == '"' && a[strlen(a)-2] == '"') {
      for(int i = 1; i < strlen(a)-2; i++) {
         printf("%c", a[i]);
      }
   }
   else{
      printf("CE");
   }

   return 0;  

}