#include <stdio.h>

int main(void) {
   int num, repeat;
   scanf("%d", &num);

   repeat = num / 4;
   for(int i = 0; i < repeat; i++){
      printf("long ");
   }

   printf("int");
}