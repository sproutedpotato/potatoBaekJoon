#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void) { 
   int k;
   scanf("%d", &k);
   int arr[k];
   
   for(int i = 0; i < k; i++){
      scanf("%d", &arr[i]);
   }

   qsort(arr, k, sizeof(int), compare);

   for(int i = 0; i < k; i++){
      printf("%d\n", arr[i]);
   }
   
   return 0;
}