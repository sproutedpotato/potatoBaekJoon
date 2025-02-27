#include <stdio.h>

int main(void) { 
   int n, a, b;
   scanf("%d", &n);

   int min = 1001;

   for(int i = 0; i < n; i++){
      scanf("%d %d", &a, &b);
      if(a <= b){
         if(min > b){
            min = b;
         }
      }
   }

   if(min == 1001)   printf("-1");
   else            printf("%d", min);

   return 0;
}