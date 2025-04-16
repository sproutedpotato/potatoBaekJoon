#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);

  int i = b - a;

  if(i >= 1 && i <= 20){
    printf("You are speeding and your fine is $100.");
  }
  else if(i >= 21 && i <= 30){
    printf("You are speeding and your fine is $270.");
  }
  else if(i >= 31){
    printf("You are speeding and your fine is $500.");
  }
  else{
    printf("Congratulations, you are within the speed limit!");
  }
  
  return 0;
}