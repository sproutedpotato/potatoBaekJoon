#include <stdio.h>

int main(void) {   
   int a;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      printf("%d\n", i + 1);
   }

   return 0;
}