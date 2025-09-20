#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);

  if (a % 2 == 0) {
    printf("2");
  } else {
    printf("1");
  }

  return 0;
}