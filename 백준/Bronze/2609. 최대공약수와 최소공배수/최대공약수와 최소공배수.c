#include <stdio.h>

int main(void) { 
   int a, b, r;
   scanf("%d %d", &a, &b);

   int new_a = a, new_b = b;
   while(1){
      r = a % b;
      if(r == 0){
         printf("%d\n", b);
         break;
      }
      else{
         a = b;
         b = r;
      }
   }

   printf("%d", (new_a * new_b) / b);
   
   return 0;
}