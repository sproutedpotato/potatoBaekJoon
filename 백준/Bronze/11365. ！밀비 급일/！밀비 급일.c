#include <stdio.h>
#include <string.h>

int main(void) { 
   char str[502];

   while(1){
      fgets(str, sizeof(str), stdin);

      if(str[0] == 'E' && str[1] == 'N' && str[2] == 'D'){
         break;
      }

      for(int i = strlen(str) - 2; i > -1; i--){
         printf("%c", str[i]);
      }
      printf("\n");
   }

   return 0;
}