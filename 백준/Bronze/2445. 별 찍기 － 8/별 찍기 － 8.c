#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      for(int j = 0; j < i + 1; j++){
         printf("*");
      }

      for(int k = 0; k < 2 * (a - 1 - i); k++){
         printf(" ");
      }

      for(int l = 0; l < i + 1; l++){
         printf("*");
      }
      printf("\n");
   }

   for(int i = 0; i < a - 1; i++){
      for(int j = 0; j < a - i - 1; j++){
         printf("*");
      }

      for(int k = 0; k < 2 * (i + 1); k++){
         printf(" ");
      }

      for(int l = 0; l < a - i - 1; l++){
         printf("*");
      }
      printf("\n");
   }

   return 0;
}