#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   int re_a = 0, re_b = 1, temp;
   if(a == 1)   printf("%d %d", re_a, re_b);
   else{
      a -= 1;
      while(1){
         a -= 1;
         temp = re_a;
         re_a = re_b;
         re_b = temp + re_b;

         if(a <= 0){
            break;
         }
      }

      printf("%d %d", re_a, re_b);
   }
   
   return 0;
}