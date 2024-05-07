#include <stdio.h>

int main(void) {
  int a, b[3];
  scanf("%d", &a);
  
  for(int i = 0; i < a; i++){
    scanf("%d %d", &b[0], &b[1]);
    printf("%d\n", b[0] + b[1]);
  }
}