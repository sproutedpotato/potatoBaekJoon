#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);

  char str[a + 1];
  scanf("%s", str);
  int even = 0, odd = 0;

  for (int i = 0; i < a; i++){
    if((str[i] - '0') % 2 == 0){
      even++;
    }
    else{
      odd++;
    }
  }

  if(even > odd){
    printf("0");
  }
  else if(even < odd){
    printf("1");
  }
  else{
    printf("-1");
  }
  return 0;
}