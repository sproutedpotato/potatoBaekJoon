#include <stdio.h>

int main(void) {
  int a, b;
  
  scanf("%d", &a);
  scanf("%d", &b);

  int result = a * 8 + b * 3 - 28;
  printf("%d", result);
  
  return 0;
}