#include <stdio.h>

int main(void) { 
   long long m, n;
   scanf("%lld %lld", &m, &n);

   if(m == n){
      printf("%lld\n", (m - 1) * 2);
      if(m % 2 == 1){
         printf("%lld %lld", (m - 1) / 2 + 1, (m - 1) / 2 + 1);
      }
      else{
         printf("%lld %lld", m / 2 + 1, m / 2);
      }
   }
   else if(m > n){
      printf("%lld\n", 2 * (n - 1) + 1);
      if(n % 2 == 0){
         printf("%lld %lld", n / 2 + 1, n / 2);
      }
      else{
         printf("%lld %lld", n / 2 + 1 + (m - n), n / 2 + 1);
      }
   }
   else{
      printf("%lld\n", 2 * (m - 1));
      if(m % 2 == 0){
         printf("%lld %lld", m / 2 + 1, m / 2);
      }
      else{
         printf("%lld %lld", m / 2 + 1, m / 2 + 1 + (n - m));
      }
   }
   
   return 0;
}