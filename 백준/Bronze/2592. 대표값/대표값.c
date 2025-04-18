#include <stdio.h>

int main(void) {

  int result = 0, max = -1, max_index;
  int arr[100] = {0};
  for(int i = 0; i < 10; i++){
    int a;
    scanf("%d", &a);

    result += a;
    arr[(a / 10) - 1]++;
  }

  for(int i = 0; i < 100; i++){
    if(arr[i] > max){
      max = arr[i];
      max_index = i;
    }
  }

  printf("%d\n%d", result / 10, (max_index + 1) * 10);
  
  return 0;
}