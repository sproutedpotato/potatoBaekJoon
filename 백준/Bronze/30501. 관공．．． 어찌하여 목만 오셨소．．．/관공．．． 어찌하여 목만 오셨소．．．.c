#include <stdio.h>
#include <string.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   char arr[a][101];
   for(int i = 0; i < a; i++){
      scanf("%s", arr[i]);
   }

   for(int i = 0; i < a; i++){
      for(int j = 0; j < strlen(arr[i]); j++){
         if(arr[i][j] == 'S'){
            printf("%s", arr[i]);
            return 0;
         }
      }
   }
   
   return 0;
}