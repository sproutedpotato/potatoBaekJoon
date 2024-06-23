#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);
   
   int x, y, z;
   scanf("%d %d %d", &x, &y, &z);
   int sum = 0;

   if(x <= a) sum += x;
   else sum += a;
   if(y <= a) sum += y;
   else sum += a;
   if(z <= a) sum += z;
   else sum += a;

   printf("%d", sum);

   return 0;  
}