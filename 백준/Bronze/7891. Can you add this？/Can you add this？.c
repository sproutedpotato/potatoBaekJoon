#include <stdio.h>

int main(void) {  
   long a, b;
   int num;
   scanf("%d", &num);
   for(int i = 0; i < num; i++){
      scanf("%ld %ld", &a, &b);
      printf("%ld\n", a + b);
   }
      

   return 0;
}