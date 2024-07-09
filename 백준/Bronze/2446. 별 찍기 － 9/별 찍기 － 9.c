#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      for(int j = 0; j < i; j++){
         printf(" ");
      }
      for(int k = 0; k < 2 * a - (i * 2 + 1); k++){
         printf("*");
      }
      printf("\n");
   }

   for(int i = 0; i < a - 1; i++){
      for(int j = 0; j < a - 2 - i; j++){
         printf(" ");
      }
      for(int k = 0; k < 2 * i + 3; k++){
         printf("*");
      }
      printf("\n");
   }

   return 0;
}