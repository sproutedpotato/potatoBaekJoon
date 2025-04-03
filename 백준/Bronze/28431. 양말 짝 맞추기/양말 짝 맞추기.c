#include <stdio.h>

int main(void) {
  int a[5];

  for (int i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < 5; i++) {
    int count = 0;
    for (int j = 0; j < 5; j++) {
      if (a[i] == a[j]) {
        count++;
      }
    }
    if (count % 2 == 1) {
      printf("%d", a[i]);
      return 0;
    }
  }

  return 0;
}