#include <stdio.h>
#include <stdlib.h>

int main(void) { 
   char a[9], b[9], c[9];
   scanf("%s", a);
   scanf("%s", b);
   scanf("%s", c);

   int result;
   if(a[0] != 'F' && a[0] != 'B'){
      result = atoi(a) + 3;
   }
   else if(b[0] != 'F' && b[0] != 'B'){
      result = atoi(b) + 2;
   }
   else if(c[0] != 'F' && c[0] != 'B'){
      result = atoi(c) + 1;
   }

   if(result % 3 == 0 && result % 5 == 0) printf("FizzBuzz");
   else if(result % 3 == 0) printf("Fizz");
   else if(result % 5 == 0) printf("Buzz");
   else printf("%d", result);
   
   return 0;
}