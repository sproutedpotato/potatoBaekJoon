#include <stdio.h>

int main(void) {
  int a, b, k, sum;
  scanf("%d", &a);

  for (int i = 0; i < a; i++) {
    sum = 0;
    scanf("%d", &b);
    for (int j = 0; j < b; j++) {
      scanf("%d", &k);
      sum += k;
    }

    printf("%d\n", sum);
  }

  return 0;
}