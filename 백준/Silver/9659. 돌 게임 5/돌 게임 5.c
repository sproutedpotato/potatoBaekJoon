#include <stdio.h>

int main(void) { 
   long long a;
   scanf("%lld", &a);

   if(a % 2 == 0){
      printf("CY");
   }
   else{
      printf("SK");
   }
   
   return 0;
}