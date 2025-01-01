#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   if(a % 7 == 1 || a % 7 == 3){
      printf("CY");
   }
   else{
      printf("SK");
   }
   
   return 0;
}