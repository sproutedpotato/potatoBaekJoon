#include <stdio.h>

int main(void) { 
   int a, b, c, d;
   int sum1 = 0, sum2 = 0;
   scanf("%d %d %d %d", &a, &b, &c, &d);
   sum1 += a + b + c + d;

   scanf("%d %d %d %d", &a, &b, &c, &d);
   sum2 += a + b + c + d;

   if(sum1 < sum2){
      printf("%d", sum2);
   }
   else{
      printf("%d", sum1);
   }
   

   return 0;
}