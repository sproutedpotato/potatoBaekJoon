#include <stdio.h>

int main(void) {
  long a, b;
  scanf("%ld %ld", &a, &b);

  if(a % 2 == 1){
    if(b % 2 == 1){
      printf("%ld", a * (b / 2) + a / 2);
    }
    else{
      printf("%ld", a * (b / 2));
    }  
  }
  else{
    printf("%ld", a / 2 * b);
  }
  
  return 0;
}