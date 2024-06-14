#include <stdio.h>

void sort(int arr[][8], int length){
   for(int i = 0; i < length - 1; i++){
      for(int j = i; j < length; j++){
         if(arr[j][0] > arr[i][0]){
            int temp = arr[i][0];
            arr[i][0] = arr[j][0];
            arr[j][0] = temp;

            int temp2 = arr[i][1];
            arr[i][1] = arr[j][1];
            arr[j][1] = temp2;
         }
      }
   }
}

void sort2(int arr[]){
   for(int i = 0; i < 4; i++){
      for(int j = i; j < 5; j++){
         if(arr[j] < arr[i]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}

int main(void) { 
   int arr[8][8], sum = 0;

   for(int i = 0; i < 8; i++){
      scanf("%d", &arr[i][0]);
      arr[i][1] = i + 1;
   }

   sort(arr, 8);

   for(int i = 0; i < 5; i++){
      sum += arr[i][0];
   }

   int new_arr[5] = {arr[0][1], arr[1][1], arr[2][1], arr[3][1], arr[4][1]};
   sort2(new_arr);
   printf("%d\n", sum);
   for(int j = 0; j < 5; j++){
      printf("%d ", new_arr[j]);
   }
   

   return 0;
}