#include <stdio.h>
#include <string.h>

int main(void) { 
   char arr[1000001];
   scanf("%s", arr);

   int length = strlen(arr);
   for(int i = 0; i < length; i++){
      printf("%c", arr[i] = arr[i] - 'a' + 'A');
   }
   
   return 0;
}