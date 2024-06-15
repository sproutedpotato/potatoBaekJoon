#include <stdio.h>

int main(void) { 
   int a, A, B, C;
   scanf("%d", &a);

   printf("Gnomes:\n");
   for(int i = 0; i < a; i++){
      scanf("%d %d %d", &A, &B, &C);
      
      if(A > B && B > C){
         printf("Ordered\n");
      }
      else if(A < B && B < C){
         printf("Ordered\n");
      }
      else{
         printf("Unordered\n");
      }
   }

   return 0;
}