#include <stdio.h>
#include <stdlib.h>

int main(void) { 
   int a, b;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      scanf("%d", &b);
      if (abs(b) % 2 == 1){
         printf("%d is odd\n", b);
      }
      else{
         printf("%d is even\n", b);
      }
   }

   return 0;
}