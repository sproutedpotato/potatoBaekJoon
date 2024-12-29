#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   if(a % 7 == 0 || a % 7 == 2){
      printf("CY");
   }
   else{
      printf("SK");
   }
   
   return 0;
}