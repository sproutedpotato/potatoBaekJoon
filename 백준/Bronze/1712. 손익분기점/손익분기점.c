#include <stdio.h>
#include <math.h>

int main(void) { 
   long a, b, c;
   scanf("%ld %ld %ld", &a, &b, &c);

   if(c <= b){
      printf("-1");
   }
   else{
      long k = a / (c - b);
      
      printf("%ld", k + 1);
   }
   
   return 0;
}