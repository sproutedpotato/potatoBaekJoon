#include <stdio.h>

int main(void) {  
   int first, second;
   scanf("%d", &first);
   scanf("%d", &second);

   printf("%d", second + (second - first));   
   
   return 0;
}