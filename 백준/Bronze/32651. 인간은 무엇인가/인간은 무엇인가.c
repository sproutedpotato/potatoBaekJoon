#include <stdio.h>

int main(void) { 
   long a;
   scanf("%ld", &a);

   if(a <= 100000 && a % 2024 == 0) {
      printf("Yes");
   }
   else{
      printf("No");
   }

   return 0;
   
}