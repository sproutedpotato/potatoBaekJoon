#include <stdio.h>
#include <string.h>

int main(void) { 
   char arr[101];
   scanf("%s", arr);

   int length = strlen(arr);
   int result = 0;

   for(int i = 0; i < length; i++){
      if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
         result++;
      }
   }

   printf("%d", result);
   
   return 0;
}