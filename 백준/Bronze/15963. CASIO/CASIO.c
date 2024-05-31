#include <stdio.h>

int main(void) { 
   long a, b;
   scanf("%ld %ld", &a, &b);

   if(a == b){
      printf("1");
   }
   else{
      printf("0");
   }

   return 0;
}