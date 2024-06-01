#include <stdio.h>

int main(void) { 
   int a, b;
   scanf("%d", &a);
   for(int i = 0; i < a; i++){
      printf("Hello World, Judge %d!\n", i + 1);
   }

   return 0;
}