#include <stdio.h>

int main(void) { 
   int a, b;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      printf("%d ", i + 1);
      if((i + 1) % 6 == 0){
         printf("Go! ");
      }
      else if((i + 1) % 6 != 0 && (i + 1) == a){
         printf("Go! ");
      }
   }

   return 0;
}