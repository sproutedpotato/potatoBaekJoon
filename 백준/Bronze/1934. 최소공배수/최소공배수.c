#include <stdio.h>

int getM(int a, int b){
  int r, k = a * b;
  while(b != 0){
    r = a % b;
    a = b;
    b = r;
  }
  return k / a;
}

int main(void) {
  int a, b, c;
  scanf("%d", &a);

  for(int i = 0; i < a; i++){
    scanf("%d %d", &b, &c);
    printf("%d\n", getM(b, c));
  }

  return 0;
}