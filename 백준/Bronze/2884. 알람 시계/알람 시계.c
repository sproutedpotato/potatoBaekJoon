#include <stdio.h>

int main(void) {
  int H, M;
  scanf("%d %d", &H, &M);

  if (M - 45 < 0){
    M = 60 + (M - 45); H -= 1;
    if (H < 0) { H = 23;}
  }
  else if(M - 45 >= 0){
    M -= 45;
  }
  printf("%d %d", H, M);
}