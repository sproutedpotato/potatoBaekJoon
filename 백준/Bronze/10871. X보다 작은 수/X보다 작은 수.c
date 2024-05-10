#include <stdio.h>

int main(void) {
   int a, num, result, input;
   scanf("%d %d", &a, &num);

   int arr[a];
   for(int i = 0; i < a; i++){
      scanf("%d", &input);
      arr[i] = input;
   }

   for(int i = 0; i < a; i++){
      if(arr[i] < num){
         printf("%d ", arr[i]);
      }
   }
   
   return 0;
}