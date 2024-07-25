#include <stdio.h>
#include <string.h>

int main(void) { 
   int k;
   char a[11];

   scanf("%d", &k);
   
   for(int i = 0; i < k; i++){
      int arr[10] = {0}, beautiful = 0;
      scanf("%s", a);

      for(int j = 0; j < strlen(a); j++){
         arr[a[j] - '0'] += 1;
      }

      for(int j = 0; j < 10; j++){
         if(arr[j] != 0) beautiful += 1;
      }

      printf("%d\n", beautiful);
      
   }
   return 0;
}