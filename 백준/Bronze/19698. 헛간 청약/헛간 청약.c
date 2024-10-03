#include <stdio.h>

int main(void) { 
   int a, b, c, d;
   scanf("%d %d %d %d", &a, &b, &c, &d);

   int k = (b / d) * (c / d);

   if(k > a)
      printf("%d", a);
   else
      printf("%d", k);
   
   return 0;
}