#include <stdio.h>
#include <string.h>

int main(void) {
  char a[101], b[101], c[2];
  scanf("%s", a);
  scanf("%s", c);
  scanf("%s", b);

  int len_a = strlen(a);
  int len_b = strlen(b);

  if(strcmp(c, "*") == 0){
    printf("1");
    for(int i = 0; i < len_a + len_b - 2; i++){
      printf("0");
    }
  }
  else{
    if(len_a > len_b){
      a[len_a - len_b] = '1';
      printf("%s", a);
    }
    else if(len_a < len_b){
      b[len_b - len_a] = '1';
      printf("%s", b);
    }
    else{
      a[0] = '2';
      printf("%s", a);
    }
  }
  
  return 0;
}