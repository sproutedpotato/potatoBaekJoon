#include <stdio.h>

int main(void) { 
   int a, b, c, d;
   scanf("%d %d", &a, &b);
   scanf("%d %d", &c, &d);

   if(a + d > c + b){
      printf("%d", c + b);
   }
   else{
      printf("%d", a + d);
   }
   
   return 0;
}