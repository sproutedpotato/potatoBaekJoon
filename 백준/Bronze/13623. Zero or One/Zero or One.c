#include <stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if (a == 1){
    if (b == 1){
      if (c == 1){
        printf("*\n");
      } else {
        printf("C\n");
      }
    } 
    else {
      if (c == 1){
        printf("B\n");
      } else {
        printf("A\n");
      }
    }
  }
  else{
    if (b == 1){
      if (c == 1){
        printf("A\n");
      } else {
        printf("B\n");
      }
    }
    else{
      if (c == 1){
        printf("C\n");
      }
      else{
        printf("*\n");
      }
    }
  }
  
  return 0;
}