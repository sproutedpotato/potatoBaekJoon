#include <stdio.h>

int main(void) { 
   double a;
   
   while(1){
      scanf("%lf", &a);
      if(a == 0)   break;

      if(a <= 1000000)   printf("%d\n", (int)a);
      else if(a > 1000000 && a <= 5000000)   printf("%d\n", (int)(a * 0.9));
      else   printf("%d\n", (int)(a * 0.8));
   }
   
   return 0;
}