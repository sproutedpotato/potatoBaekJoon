#include <stdio.h>

int main(void) { 
   int length;
   scanf("%d", &length);
   char a[length + 1];
   scanf("%s", a);

   for(int i = length - 5; i < length; i++){
      printf("%c", a[i]);
   }
   
}