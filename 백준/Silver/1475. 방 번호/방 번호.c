#include <stdio.h>

int max(int arr[], int length){
   int max = -1;
   for(int i = 0; i < length; i++){
      if (arr[i] > max){
         max = arr[i];
      }
   }
   return max;
}

int main(void) {  
   int arr[10] = {0};
   int num;
   scanf("%d", &num);

   int count;
   while(num > 0) {
      count = num % 10;

      if(arr[6] < arr[9] && (count == 6 || count == 9)){
         arr[6] += 1;
      }
      else if(arr[6] > arr[9] && (count == 6 || count == 9)){
         arr[9] += 1;
      }
      else{
         arr[count] += 1;
      }
      num = num / 10;
   }
   printf("%d ", max(arr, 10));
   
   return 0;
}