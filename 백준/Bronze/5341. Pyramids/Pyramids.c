#include <stdio.h>

int main(void) {  
   int a, b;
   while(1){
      scanf("%d", &a);
      b = 0;
      if (a == 0){
         break;
      }
      for(int i = 0; i < a; i++){
         b += i + 1;
      }

      printf("%d\n", b);
   }
   return 0;
}