#include <stdio.h>

int main(void) { 
   int n;
   scanf("%d", &n);

   long long result = 1;
   
   for(int i = 0; i < 3; i++){
      result *= n;
   }

   printf("%lld\n3", result);

   return 0;
   
}