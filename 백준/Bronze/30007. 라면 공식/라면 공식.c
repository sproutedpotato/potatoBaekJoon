#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);

  for(int i = 0; i < a; i++){
    int b, c, d;
    scanf("%d %d %d", &b, &c, &d);

    printf("%d\n", b * (d - 1) + c);    
  }
  
  return 0;
}