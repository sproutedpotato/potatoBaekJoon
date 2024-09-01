#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *((int *) b) - *((int *) a);
}

int main(void) { 
   int a;
   scanf("%d", &a);

   int arr[a];
   for(int i = 0; i < a; i++){
      scanf("%d", &arr[i]);
   }

   qsort(arr, a, sizeof(int), compare);

   for(int i = 0; i < a; i++){
      printf("%d\n", arr[i]);
   }

   return 0;
}