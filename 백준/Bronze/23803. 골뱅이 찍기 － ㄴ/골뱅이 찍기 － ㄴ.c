#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   for(int i = 0; i < a * 5 - a; i++){
      for(int j = 0; j < a; j++){
         printf("@");
      }
      printf("\n");
   }

   for(int i = 0; i < a; i++){
      for(int j = 0; j < a * 5; j++){
         printf("@");
      }
      printf("\n");
   }
   
   return 0;
}