#include <stdio.h>

int main(void) {
   int a;
   scanf("%d", &a);

   for(int i = 1; i <= a; i++){
      for(int j = a - i; 0 < j; j--){
         printf(" ");
      }
      for(int k = 0; k < i; k++){
         printf("*");
      }
      printf("\n");
   }

   return 0;
}