#include <stdio.h>

void bubble_sort(int list[], int n){
   int temp;
   for(int i = n - 1; i > 0; i--){
      for(int j = 0; j < i; j++){
         if(list[j] < list[j + 1]){
            temp = list[j];
            list[j] = list[j + 1];
            list[j + 1] = temp;
         }
      }
   }
}

int main(void) { 
   int arr[4];
   for(int i = 0; i < 4; i++){
      scanf("%d", &arr[i]);
   }

   bubble_sort(arr, 4);

   printf("%d", arr[1] * arr[3]);
   
   return 0;
}