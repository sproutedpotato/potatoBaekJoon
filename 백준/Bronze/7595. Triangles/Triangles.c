#include <stdio.h>

int main(void) { 
   int a;
   while(1){
      scanf("%d", &a);
      if (a == 0) break;
      for(int i = 0; i < a; i++){
         for(int j = 0; j < i + 1; j++){
            printf("*");
         }
         printf("\n");
      }
   }

   return 0;
}