#include <stdio.h>

int main(void) {   
   int a;
   scanf("%d", &a);

   for(int i = 0; i < a * 2; i += 2){
      for(int j = (a - 1) - i / 2; j > 0; j--){
         printf(" ");
      }
      for(int k = 0; k < i + 1; k++){
         printf("*");
      }
      printf("\n");
   }

   for(int i = 0; i < (a - 1) * 2; i += 2){
      for(int j = 0; j < (i / 2) + 1; j++){
         printf(" ");
      }
      for(int k = (a - 1) * 2 - (i + 1); k > 0; k--){
         printf("*");
      }
      printf("\n");
   }
   
   return 0;
}