#include <stdio.h>

int gcd(a, b) {
  int r;
  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main(void) { 
   int a, b;
   char k;
   scanf("%d%c%d", &a, &k, &b);

   int num = gcd(a, b);
   printf("%d:%d", a / num, b / num);
   
   return 0;
}