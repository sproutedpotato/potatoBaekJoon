#include <stdio.h>
#include <string.h>

int main(void) {
  char str[5];

  while(1){
    scanf("%s", str);
    if(strcmp(str, "0") == 0){
      break;
    }

    int len = strlen(str);
    int result = 0;
    for(int i = 0; i < len; i++){
      if(str[i] == '0'){
        result += 4;
      }
      else if(str[i] == '1'){
        result += 2;
      }
      else{
        result += 3;
      }
    }

    printf("%d\n", result + len + 1);
    
  }
  return 0;
}