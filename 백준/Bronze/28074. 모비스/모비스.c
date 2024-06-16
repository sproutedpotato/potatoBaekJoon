#include <stdio.h>
#include <string.h>

int main(void) { 
   char input[101];
   scanf("%s", input);

   int arr[5] = {0};
   int length = strlen(input);
   for(int i = 0; i < length; i++){
      if(input[i] == 'M') arr[0] += 1;
      else if(input[i] == 'O') arr[1] += 1;
      else if(input[i] == 'B') arr[2] += 1;
      else if(input[i] == 'I') arr[3] += 1;
      else if(input[i] == 'S') arr[4] += 1;
   }

   if(arr[0] > 0 && arr[1] > 0 && arr[2] > 0 && arr[3] > 0 && arr[4] > 0){
      printf("YES");
   }
   else printf("NO");
   
   return 0;
}