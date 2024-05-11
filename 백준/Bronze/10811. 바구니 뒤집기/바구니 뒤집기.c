#include <stdio.h>

int main(void) {
   int a, b;
   scanf("%d %d", &a, &b);

   int arr[a];
   for(int i = 0; i < a; i++){
      arr[i] = i + 1;
   }

   for(int i = 0; i < b; i++){
      int x, y;
      scanf("%d %d", &x, &y);
      if (x != y){
         for(int j = 0; j < (y - x + 1) / 2; j++) {
            int temp = arr[x - 1 + j];
            arr[x - 1 + j] = arr[y - 1 - j];
            arr[y - 1 - j] = temp;
         }
      }
   }

   for(int i = 0; i < a; i++){
      printf("%d ", arr[i]);
   }
   
   return 0;
}