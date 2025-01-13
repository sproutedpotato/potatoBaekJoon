#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);
   
   long long result = 0;

   for(int i = a - 1; i > 0; i--){
      result += i;
   }

   printf("%lld\n2", result);
   
   return 0;
}