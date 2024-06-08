#include <stdio.h>

int main(void) { 
   int a, x, y;
   scanf("%d", &a);
   for(int i = 0; i < a; i++){
      scanf("%d %d", &x, &y);
      if(x < y){
         printf("NO BRAINS\n");
      }
      else{
         printf("MMM BRAINS\n");
      }
   }

   return 0;
}