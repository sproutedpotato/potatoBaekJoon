#include <stdio.h>

int main(void) {  
   int a, b;
   scanf("%d %d", &a, &b);
   int count = 0;

   for(int i = 1; i <= a; i++){
      if(a % i == 0){
         count += 1;
      }
      
      if(count == b){
         printf("%d", i);
         break;
      }
   }

   if(count < b){
      printf("0");
   }
   
   return 0;
}