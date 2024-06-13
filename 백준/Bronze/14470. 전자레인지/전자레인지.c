#include <stdio.h>

int main(void) { 
   int a, b, c, d, e;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   scanf("%d", &d);
   scanf("%d", &e);

   int sum = 0;
   if(a < 0){
      int x = 0 - a;
      sum += x * c;
      a = 0;
   }

   if(a == 0){
      sum += d;
   }

   sum += (b - a) * e;

   printf("%d", sum);

   return 0;
}