#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   int one = 0, two = 0, three = 0;

   for(int i = 1; i <= a; i++){
      one += i;
      two += i;
      three += i * i * i;
   }

   printf("%d\n%d\n%d", one, two * two, three);
   
   return 0;
}