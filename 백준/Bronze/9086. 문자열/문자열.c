#include <stdio.h>
#include <string.h>

int main(void) {
   int a;
   char str[1001];

   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      scanf("%s", str);
      int length = strlen(str);
      printf("%c%c\n", str[0], str[length - 1]);
   }
   
   return 0;
}