#include <stdio.h>

void sort(int arr[], int length){
   for(int i = 0; i < length - 1; i++){
      for(int j = i + 1; j < length; j++){
         if(arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}

int main(void) { 
   int a;
   scanf("%d", &a);

   int arr[10];
   for(int i = 0; i < a; i++){
      for(int j = 0; j < 10; j++){
         scanf("%d", &arr[j]);
      }
      sort(arr, 10);
      printf("%d\n", arr[7]);
   }

   return 0;
}