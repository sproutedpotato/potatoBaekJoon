#include <stdio.h>

int main(void) {  
   int a, b, c;
   scanf("%d", &a);
   for(int i = 0; i < a; i++){
      scanf("%d %d", &b, &c);
      for(int j = 0; j < c; j++){
         for(int k = 0; k < b; k++){
            printf("X");
         }
         printf("\n");
      }
      printf("\n");
   }
   
   return 0;
}