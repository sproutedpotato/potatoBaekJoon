#include <stdio.h>

void sort(int arr[], int length){
   int temp;
   for(int i = 0; i < length - 1; i++){
      for(int j = i + 1; j < length; j++){
         if (arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}

int main(void) {
   int arr[10];
   for(int i = 0; i < 10; i++){
      scanf("%d", &arr[i]);
   }

   int result = 0;
   int divide[10] = {0};

   for(int i = 0; i < 10; i++){
      divide[i] = arr[i] % 42;
   }

   sort(divide, 10);

   for(int i = 0; i < 9; i++){
      if(divide[i] != divide[i + 1]){
         result++;
      }
   }

   printf("%d", result + 1);
   
   return 0;
}