#include <stdio.h>

int main(void) {  
   int a, b, c;
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);

   int arr[10] = {0};
   int num = a * b * c;
   while(1){
      if (num == 0){
         break;
      }
      int k = num % 10;
      for(int i = 0; i < 10; i++){
         if (k == i){
            arr[i] += 1;
         }
      }

      num -= k;
      num /= 10;
   }

   for(int i = 0; i < 10; i++){
      printf("%d ", arr[i]);
   }

   return 0;
}