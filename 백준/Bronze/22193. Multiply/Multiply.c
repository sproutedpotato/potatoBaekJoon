#include <stdio.h>

int main(void) { 
   long long a, b;
   scanf("%lld %lld", &a, &b);

   long long x, y;
   scanf("%lld", &x);
   scanf("%lld", &y);

   printf("%lld", x * y);
   
   return 0;
}