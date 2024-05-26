#include <stdio.h>

int main(void) {  
   int a, b, c;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);

   if(a + b + c == 180){
      if(a == b && a == c){
         printf("Equilateral");
      }
      else if(a == b && a != c || a == c && a != b || b == c && b != a){
         printf("Isosceles");
      }
      else{
         printf("Scalene");
      }
   }
   else{
      printf("Error");
   }

   return 0;
}