#include <stdio.h>
#include <string.h>

int main(void) {   
   int a, b, length;
   char str[21];
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      scanf("%d %s", &b, str);
      length = strlen(str);
      for(int j = 0; j < length; j++){
         for(int k = 0; k < b; k++){
            printf("%c", str[j]);
         }
      }
      printf("\n");
   }
   
   return 0;
}