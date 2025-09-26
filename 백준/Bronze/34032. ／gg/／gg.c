#include <stdio.h>

int main(void) {
  int a;
  float count = 0;
  scanf("%d", &a);

  char str[a];
  scanf("%s", str);

  for (int i = 0; i < a; i++) {
    if (str[i] == 'O') {
      count += 1;
    }
  }  

  float t = a / 2.0;

  if (count >= t) {
    printf("Yes");
  } else {
    printf("No");
  }

  return 0;
}