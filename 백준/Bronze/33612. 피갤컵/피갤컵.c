#include <stdio.h>

int main(void) {
  int a;
  
  scanf("%d", &a);

  if(a == 1)  printf("2024 8");
  else if(a == 2)  printf("2025 3");
  else if(a == 3)  printf("2025 10");
  else if(a == 4)  printf("2026 5");
  else  printf("2026 12");
  
  return 0;
}