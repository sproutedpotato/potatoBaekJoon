#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   int candy[100];
   int b;
   scanf("%d", &b);

   for(int i = 0; i < b; i++){
      scanf("%d", &candy[i]);
   }

   int sum = 0;
   for(int i = 0; i < b; i++){
      sum += candy[i];
   }

   if(a <= sum){
      printf("Padaeng_i Happy");
   }
   else printf("Padaeng_i Cry");

   return 0;
}