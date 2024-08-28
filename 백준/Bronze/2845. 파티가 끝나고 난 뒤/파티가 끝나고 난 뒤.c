#include <stdio.h>

int main(void) { 
   int a, b;
   scanf("%d %d", &a, &b);

   int v, w, x, y, z;
   scanf("%d %d %d %d %d", &v, &w, &x, &y, &z);

   int p = a * b;
   printf("%d %d %d %d %d", v - p, w - p, x - p, y - p, z - p);
   
   return 0;
}