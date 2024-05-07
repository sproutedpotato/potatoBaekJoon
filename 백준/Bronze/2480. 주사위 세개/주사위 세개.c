#include <stdio.h>

int max(int a, int b, int c){
  int max;
  if (a > b && a > c){ max = a;}
  else if (b > a && b > c){ max = b;}
  else{ max = c;}
  return max;
}

int main(void) {
  int a, b, c;
  int price;
  scanf("%d %d %d", &a, &b, &c);
  
  if (a == b && b == c){
    price = 10000 + a * 1000;
  }
  else if (a == b && a != c || a == c && a != b){
    price = 1000 + a * 100;
  }
  else if (b == c && b != a){
    price = 1000 + b * 100;
  }
  else{
    price = max(a, b, c) * 100;
  }
  printf("%d", price);
}