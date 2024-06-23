#include <stdio.h>

int main(void) { 
   int x;
   scanf("%d", &x);

   for(int i = 0; i < x; i++) {
      int a;
      scanf("%d", &a);
      
      printf("%d %d\n", a, a);
   }


   return 0;  
}