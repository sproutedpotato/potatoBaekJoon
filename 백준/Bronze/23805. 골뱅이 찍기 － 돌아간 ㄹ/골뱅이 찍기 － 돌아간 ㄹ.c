#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      for(int j = 0; j < 3 * a; j++){
         printf("@");
      }

      for(int k = 0; k < a; k++){
         printf(" ");
      }

      for(int l = 0; l < a; l++){
         printf("@");
      }
      printf("\n");
   }

   for(int i = 0; i < 3 * a; i++){
      for(int j = 0; j < a; j++){
         printf("@");
      }

      for(int k = 0; k < a; k++){
         printf(" ");
      }

      for(int l = 0; l < a; l++){
         printf("@");
      }

      for(int m = 0; m < a; m++){
         printf(" ");
      }

      for(int n = 0; n < a; n++){
         printf("@");
      }
      printf("\n");
   }

   for(int i = 0; i < a; i++){
      for(int j = 0; j < a; j++){
         printf("@");
      }

      for(int k = 0; k < a; k++){
         printf(" ");
      }

      for(int l = 0; l < 3 * a; l++){
         printf("@");
      }
      printf("\n");
   }
   
   return 0;
}