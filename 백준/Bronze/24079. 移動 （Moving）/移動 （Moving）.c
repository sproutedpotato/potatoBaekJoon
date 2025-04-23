#include <stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if(a + b <= c){
    printf("1");
  }
  else{
    printf("0");
  }
  
  
  return 0;
}