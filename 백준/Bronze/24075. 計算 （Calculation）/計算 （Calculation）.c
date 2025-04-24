#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  if (a + b > a - b){
    printf("%d\n", a + b);
    printf("%d", a - b);
  }
  else{
    printf("%d\n", a - b);
    printf("%d", a + b);
  }
  
  return 0;
}