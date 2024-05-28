#include <stdio.h>

int getMax(int a, int b, int c){
   int max;
   if (a > b && a > c){
      max = a;
   }
   else if (b > a && b > c){
      max = b;
   }
   else{
      max = c;
   }

   return max;
}

int main(void) {  
   int a, b, c, max;
   scanf("%d %d %d", &a, &b, &c);

   if(a + b > c && a + c > b && b + c > a){
      printf("%d", a + b + c);
   }
   else{
      max = getMax(a, b, c);
      while(a + b <= c || a + c <= b || b + c <= a){
         if (a == max){
            a -= 1;
            max -= 1;
         }
         else if(b == max){
            b -= 1;
            max -= 1;
         }
         else{
            c -= 1;
            max -= 1;
         }
      }
      printf("%d", a + b + c);
   }
}