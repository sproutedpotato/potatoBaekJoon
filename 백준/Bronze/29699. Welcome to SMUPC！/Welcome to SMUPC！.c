#include <stdio.h>

int main(void) {
  int a;
  char str[15] = "WelcomeToSMUPC";
  scanf("%d", &a);

  if(a % 14 == 0){
    printf("C");
  }
  else{
    printf("%c\n", str[(a % 14) - 1]);
  }
  
  
  return 0;
}