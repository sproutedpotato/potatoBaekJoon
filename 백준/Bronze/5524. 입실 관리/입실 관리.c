#include <stdio.h>
#include <string.h>

int main(void) { 
   char arr[101];
   int a;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      scanf("%s", arr);

      for(int j = 0; j < strlen(arr); j++){
         if((int)arr[j] < 95){
            arr[j] = (char)((int)arr[j] + 32);
         }
      }

      printf("%s\n", arr);
   }



   return 0;
}