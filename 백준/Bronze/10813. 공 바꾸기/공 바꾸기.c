#include <stdio.h>

int main(void) {
   int a, b, x, y, temp;
   scanf("%d %d", &a, &b);

   int arr[a];
   for(int i = 0; i < a; i++){
      arr[i] = i + 1;
   }
   
   for(int i = 0; i < b; i++){
      scanf("%d %d", &x, &y);
      temp = arr[x - 1];
      arr[x - 1] = arr[y - 1];
      arr[y - 1] = temp;
   }

   for(int i = 0; i < a; i++){
      printf("%d ", arr[i]);
   }
   
   return 0;
}