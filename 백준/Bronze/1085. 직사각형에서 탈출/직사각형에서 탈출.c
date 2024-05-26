#include <stdio.h>

int main(void) {  
   int x, y, a, b, result;
   scanf("%d %d %d %d", &x, &y, &a, &b);

   int min = x;
   if(min > a - x){
      min = a - x;
   }
   if(min > y){
      min = y;
   }
   if(min > b - y){
      min = b - y;
   }

   printf("%d", min);

   return 0;
}