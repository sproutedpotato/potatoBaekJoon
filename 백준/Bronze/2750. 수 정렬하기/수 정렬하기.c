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

   int arr[a];
   for(int i = 0; i < a; i++){  
      scanf("%d", &arr[i]);
   }

   sort(arr, a);
   for(int i = 0; i < a; i++){
      printf("%d\n", arr[i]);
   }

   return 0;
}