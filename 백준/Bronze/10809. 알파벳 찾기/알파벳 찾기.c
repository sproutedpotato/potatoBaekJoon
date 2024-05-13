#include <stdio.h>
#include <string.h>

int main(void) {   
   char num[101];
   scanf("%s", num);

   int arr[26];
   for(int i = 0; i < 26; i++){
      arr[i] = -1;
   }

   int length = strlen(num);
   for(int i = 0; i < length; i++){
      int index = num[i] - 'a';
      if(arr[index] == -1){
         arr[index] = i;
      }
   }

   for(int i = 0; i < 26; i++){
      printf("%d ", arr[i]);
   }
   
   return 0;
}