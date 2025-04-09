#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
   return (*(int*) a) - (*(int*) b);
}

int main(void) {
  int a;
  scanf("%d", &a);

  int arr[a];
  for(int i = 0; i < a; i++){
    scanf("%d", &arr[i]);
  }

  qsort(arr, a, sizeof(int), compare);

  long long S = 0, P = 0;
  int left = 0, right = a - 1;

  int turn = 0;

  while (left <= right) {
      if (turn % 2 == 0) {
          P += arr[right--];
      } else {
          S += arr[left++];
      }
      turn++;
  }


  printf("%lld %lld\n", S, P);
  
}