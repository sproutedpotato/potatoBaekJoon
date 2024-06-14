#include <stdio.h>

void sort(int arr[], int length){
   for(int i = 0; i < length - 1; i++){
      for(int j = i; j < length; j++){
         if(arr[j] < arr[i]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}

int main(void) { 
   int arr[3], cola[2];

   for(int i = 0; i < 3; i++){
      scanf("%d", &arr[i]);
   }
   for(int j = 0; j < 2; j++){
      scanf("%d", &cola[j]);
   }

   sort(arr, 3);
   sort(cola, 2);

   printf("%d", arr[0] + cola[0] - 50);

   return 0;
}