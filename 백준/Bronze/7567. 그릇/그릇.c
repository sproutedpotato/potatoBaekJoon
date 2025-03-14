#include <stdio.h>
#include <string.h>

int main(void) {
  char str[51];
  scanf("%s", str);

  int len = strlen(str), result = 10;

  for(int i = 1; i < len; i++){
    if(str[i] == str[i - 1]){
      result += 5;
    }
    else{
      result += 10;
    }
  }

  printf("%d", result);
  return 0;
}