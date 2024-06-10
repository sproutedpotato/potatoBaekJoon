#include <stdio.h>

int main(void) { 
   long a, b, sum;
   scanf("%ld %ld", &a, &b);

   if(a > b){
      sum = b / 2;
   }
   else{
      sum = a / 2;
   }

   printf("%ld", sum);

   return 0;
}