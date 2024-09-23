#include <stdio.h>

int main(void) { 
   int l, a, b, c, d;
   scanf("%d", &l);
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   scanf("%d", &d);

   int result = 0;
   while(1){
      if(a <= 0 && b <= 0)   break;
      a -= c;
      b -= d;

      result++;
   }

   printf("%d", l - result);
   
   return 0;
}