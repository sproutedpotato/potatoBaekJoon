#include <stdio.h>

int getMax(int arr[], int length){
   int max = -1;
   for(int i = 0; i < length; i++){
      if(arr[i] > max){
         max = arr[i];
      }
   }

   return max;
}

int main(void) { 
   int a, arr[5] = {-1};
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      for(int j = 0; j < 5; j++){
         scanf("%d", &arr[j]);
      }
      int max = getMax(arr, 5);
      printf("Case #%d: %d\n", i + 1, max);
   }
   
   return 0;
}