#include <stdio.h>

int main(void) {  
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);

   if (a + c < b){
      printf("%d", b);
   }
   else{
      printf("%d", a + c);
   }
   
   return 0;
}