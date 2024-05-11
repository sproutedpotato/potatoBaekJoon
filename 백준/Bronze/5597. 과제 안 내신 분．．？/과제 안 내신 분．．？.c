#include <stdio.h>

void sort(int arr[], int length){
   int temp;
   for(int i = 0; i < length - 1; i++){
      for(int j = i + 1; j < length; j++){
         if(arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}

int main(void) {
   int arr[28];
   for(int i = 0; i < 28; i++){
      scanf("%d", &arr[i]);
   }

   sort(arr, 28);

   int index = 1;
   int print = 0;
   
   for(int i = 0; i < 28; i++){
      if(arr[i] != index){
         printf("%d\n", index);
         print += 1;
         i -= 1;
      }
      index += 1;
   }
   if (print < 2){
      printf("%d", 30);
   }
   
   return 0;
}