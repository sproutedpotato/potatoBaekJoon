#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      int b;
      scanf("%d", &b);
      while(1){
         if (b - 5 >= 0){
            printf("++++ ");
            b -= 5;
         }
         else break;
      }
      for(int j = 0; j < b; j++){
         printf("|");
      }
      printf("\n");
   }
   
}