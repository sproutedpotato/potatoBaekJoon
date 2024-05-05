#include <stdio.h>

int main(void) {
  int a;
  int b;
  
  scanf("%d", &a);
  scanf("%d", &b);

  int first = b % 10;
  int second = ((b - first) % 100) / 10;
  int third = b / 100;

  printf("%d\n", a * first);
  printf("%d\n", a * second);
  printf("%d\n", a * third);
  printf("%d", a * b);
  
  return 0;
}