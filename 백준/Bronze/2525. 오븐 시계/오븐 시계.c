#include <stdio.h>

int main(void) {
  int H, M, C;
  scanf("%d %d", &H, &M);
  scanf("%d", &C);

  int x = C / 60;
  if (x >= 1){ 
    C -= 60 * (x); H += x;
    if (H > 23){ H -= 24;}
  }
  
  if (M + C > 59){
    M = M + C - 60; H += 1;
    if (H > 23) { H = 0;}
  }
  else if(M + C <= 59){
    M += C;
  }
  printf("%d %d", H, M);
}