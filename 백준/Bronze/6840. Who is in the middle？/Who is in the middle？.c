#include <stdio.h>

int main(void) {  
   int a, b, c;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);

   if((a > b && c > a) || (a > c && b > a)){
      printf("%d", a);
   }
   else if((b > a && c > b) || (b > c && a > b)){
      printf("%d", b);
   }
   else{
      printf("%d", c);
   }

   return 0;
}