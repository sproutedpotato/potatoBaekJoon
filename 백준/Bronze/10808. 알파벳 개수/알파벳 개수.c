#include <stdio.h>
#include <string.h>

int main(void) { 
   char arr[101];
   scanf("%s", arr);

   int length = strlen(arr);
   int total[26] = {0};

   for(int i = 0; i < length; i++){
      total[(int)arr[i] - 97] += 1;
   }

   for(int i = 0; i < 26; i++){
      printf("%d ", total[i]);
   }
   
   return 0;
}