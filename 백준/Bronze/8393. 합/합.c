#include <stdio.h>

int main(void) {
  int a, sum;
  scanf("%d", &a);
  sum = 0;
  
  for(int i = 1; i <= a; i++){
     sum += i; 
  }
  printf("%d", sum);
}