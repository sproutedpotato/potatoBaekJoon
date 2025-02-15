#include <stdio.h>


int main(void) { 
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);

   if(a >= 1000 && (b >= 8000 || c >= 260)) {
      printf("Very Good");
   }
   else if(a >= 1000)   printf("Good");
   else   printf("Bad");

   return 0;
}