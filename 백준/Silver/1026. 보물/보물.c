#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
   return (*(int*)a - *(int*)b);
}

int compare2(const void *a, const void *b){
   return (*(int*)b - *(int*)a);
}

int main(void) { 
   int k;
   scanf("%d", &k);
   int arr_a[k], arr_b[k];

   for(int i = 0; i < k; i++){
      scanf("%d", &arr_a[i]);
   }

   for(int j = 0; j < k; j++){
      scanf("%d", &arr_b[j]);
   }

   qsort(arr_a, k, sizeof(int), compare);
   qsort(arr_b, k, sizeof(int), compare2);

   int sum = 0;
   for(int i = 0; i < k; i++){
      sum += arr_a[i] * arr_b[i];
   }

   printf("%d", sum);

   return 0;
}