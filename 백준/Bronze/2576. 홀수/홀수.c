#include <stdio.h>

void sort2(int arr[]){
   for(int i = 0; i < 6; i++){
      for(int j = i; j < 7; j++){
         if(arr[j] < arr[i]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}

int main(void) { 
   int arr[7], sum = 0, flag = 0;

   for(int i = 0; i < 7; i++){
      scanf("%d", &arr[i]);
   }

   sort2(arr);

   for(int j = 0; j < 7; j++){
      if(arr[j] % 2 == 1){
         sum += arr[j];
         flag = 1;
      }
   }

   if(flag){
      printf("%d\n", sum);
      for(int k = 0; k < 7; k++){
         if(arr[k] % 2 == 1){
            printf("%d", arr[k]);
            break;
         }
      }
   }

   else{
      printf("-1");
   }

   return 0;
}