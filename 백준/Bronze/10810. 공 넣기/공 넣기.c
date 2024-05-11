#include <stdio.h>

int main(void) {
   int a, b, x, y, z;
   scanf("%d %d", &a, &b);

   int arr[a];
   for(int i = 0; i < a; i++){
      arr[i] = 0;
   }
   
   for(int i = 0; i < b; i++){
      scanf("%d %d %d", &x, &y, &z);
      for(int j = 0; j <= y - x; j++){
         arr[(x - 1) + j] = z;
      }
   }

   for(int i = 0; i < a; i++){
      printf("%d ", arr[i]);
   }
   
   return 0;
}