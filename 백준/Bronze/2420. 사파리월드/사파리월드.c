#include <stdio.h>

int main(void) { 
   long a, b;
   scanf("%ld %ld", &a, &b);

   long result = a - b;
   if(result < 0) printf("%ld", result * -1);
   else printf("%ld", result);
   
   return 0;
}