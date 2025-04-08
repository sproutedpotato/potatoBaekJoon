#include <stdio.h>

int main(void) {
  long long int a, b;
  scanf("%lld %lld", &a, &b);

  long long int k = a * b;
  long long int r;
  while(b != 0){
    r = a % b;
    a = b;
    b = r;
  }

  printf("%lld\n", k / a);

  return 0;
}