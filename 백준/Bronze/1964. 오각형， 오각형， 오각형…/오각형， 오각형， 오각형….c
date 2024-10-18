#include <stdio.h>

int main(void) { 
   long long a;
   scanf("%lld", &a);
   
   long long result = 5;
   long long line = 3, dest = 1;
   for(int i = 1; i < a; i++){
      result += (line * 2) + dest;
      line++;
      dest++;
   }

   printf("%lld", result % 45678);
   
   return 0;
}