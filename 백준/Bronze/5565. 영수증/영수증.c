#include <stdio.h>

int main(void) {
  int a, result = 0;
  scanf("%d", &a);

  for(int i = 0; i < 9; i++){
    int b;
    scanf("%d", &b);

    result += b;
  }

  printf("%d\n", a - result);
  
  return 0;
}