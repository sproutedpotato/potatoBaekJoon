#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[1001], str2[1001];
  scanf("%s", str1);
  scanf("%s", str2);

  int result = strlen(str1) + strlen(str2);

  for(int i = 0; i < strlen(str1); i++){
    for(int j = 0; j < strlen(str2); j++){
      if(str1[i] == str2[j]){
        result -= 2;
        str2[j] = '0';
        break;
      }
    }
  }

  printf("%d", result);
  
  return 0;
}