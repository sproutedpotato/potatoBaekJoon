#include <stdio.h>

int main(void) {
  char arr[16];
  scanf("%s", arr);

  int index = 0;

  while(1) {
    if (arr[index] == '.'){
      break;
    }
    printf("%c", arr[index]);
    index++;
  }
  
  return 0;
}