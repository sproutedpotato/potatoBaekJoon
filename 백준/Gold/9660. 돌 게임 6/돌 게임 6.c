#include <stdio.h>

int main(void) { 
   long long a;
   scanf("%lld", &a);

   if(a % 7 == 0 || a % 7 == 2){
      printf("CY");
   }
   else{
      printf("SK");
   }
   
   return 0;
}