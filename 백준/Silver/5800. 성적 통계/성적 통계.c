#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
   return (*(int*) b - (*(int*) a));
}

int main(void) { 
   int a, gap;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      int b;
      scanf("%d", &b);
      
      int arr[b];
      for(int j = 0; j < b; j++){
         scanf("%d", &arr[j]);
      }

      qsort(arr, b, sizeof(int), compare);

      gap = -1;
      for(int k = 0; k < b - 1; k++){
         if(arr[k] - arr[k + 1] > gap){
            gap = arr[k] - arr[k + 1];
         }
      }

      printf("Class %d\nMax %d, Min %d, Largest gap %d\n", i + 1, arr[0], arr[b - 1], gap);
   }
   
   return 0;
}