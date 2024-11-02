#include <stdio.h>

int main(void) { 
   int a, b, result = 0;
   scanf("%d %d", &a, &b);

   while(1){
      a -= 2;
      b -= 1;
      
      if(a < 0 || b < 0)   break;
      
      result += 1;
   }

   printf("%d", result);
   
   return 0;
}