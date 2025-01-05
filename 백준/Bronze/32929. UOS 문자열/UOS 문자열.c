#include <stdio.h>

int main(void) { 
   long long a;
   scanf("%lld", &a);

   char arr[3] = {'U', 'O', 'S'};
   printf("%c", arr[(a - 1) % 3]);
   
   return 0;
}