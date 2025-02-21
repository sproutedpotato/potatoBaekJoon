#include <stdio.h>

int main(void) { 
   int n;
   scanf("%d", &n);

   long long result = 1;
   
   for(int i = 1; i <= n; i++){
      result *= i;
   }

   printf("%lld\n", result / (60 * 60 * 24 * 7));

   return 0;
   
}