#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
   return (*((int *)b) - *((int *)a));
}

int main(void) { 
   int a, sum, min;
   scanf("%d", &a);

   int arr[7];
   
   for(int i = 0; i < a; i++){
      sum = 0;
      for(int j = 0; j < 7; j++){
         scanf("%d", &arr[j]);
      }
      
      qsort(arr, 7, sizeof(int), compare);
      for(int k = 0; k < 7; k++){
         if(arr[k] % 2 == 0){
            sum += arr[k];
            min = arr[k];
         }
      }

      printf("%d %d\n", sum, min);
   }
   
   return 0;
}