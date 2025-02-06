#include <stdio.h>

void swap(int *a, int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

int main(void) { 
   int a, b, c, good = 1, bad = 1;
   scanf("%d %d %d", &a, &b, &c);

   for(int i = 0; i < a; i++){
      good += b;
      bad += c;
      if(good < bad)   swap(&good, &bad);
      if(good == bad)   bad -= 1;
   }

   printf("%d %d", good, bad);

   return 0;
}