#include <stdio.h>

int main(void) { 
   int n, k;
   scanf("%d %d", &n, &k);

   int mother = 1, son = 1;
   for(int i = 0; i < k; i++) {
      mother *= n - i;
      son *= i + 1;
   }

   printf("%d", mother / son);
   
   return 0;
}