#include <stdio.h>

int main(void) { 
   long a, b, c;
   scanf("%ld %ld %ld", &a, &b, &c);
   if(a + b == c){
      printf("correct!");
   }
   else{
      printf("wrong!");
   }

   return 0;
}