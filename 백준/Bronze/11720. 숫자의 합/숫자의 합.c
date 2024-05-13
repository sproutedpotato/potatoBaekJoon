#include <stdio.h>

int main(void) {
   int a;
   scanf("%d", &a);
   
   char num[a];
   scanf("%s", num);

   int sum = 0;
   for(int i = 0; i < a; i++){
      sum += num[i] - '0';
   }
   
   printf("%d", sum);
   
   return 0;
}