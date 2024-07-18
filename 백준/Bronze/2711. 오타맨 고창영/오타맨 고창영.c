#include <stdio.h>
#include <string.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   char letter[1001];
   int pos;
   for(int i = 0; i < a; i++){
      scanf("%d %s", &pos, letter);

      for(int j = 0; j < strlen(letter); j++){
         if(j != pos - 1){
            printf("%c", letter[j]);
         }
      }
      printf("\n");
   }
   
   return 0;
}