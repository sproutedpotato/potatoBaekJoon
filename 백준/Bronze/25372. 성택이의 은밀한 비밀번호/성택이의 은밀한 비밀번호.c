#include <stdio.h>
#include <string.h>

int main(void) { 
   int a;
   char arr[21];

   scanf("%d", &a);
   for(int i = 0; i < a; i++){
      scanf("%s", arr);
      int length = strlen(arr);

      if(length < 10 && length > 5) printf("yes\n");
      else printf("no\n");
   }
   

   return 0;
}