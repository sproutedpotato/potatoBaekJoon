#include <stdio.h>
#include <string.h>

int main(void) { 
   int a;
   scanf("%d", &a);
   char num[100];

   for(int i = 0; i < a; i++){
      scanf("%s", num);

      int length = strlen(num);
      if((num[length - 1] - '0') % 2 == 0)   printf("even\n");
      else   printf("odd\n");
   }
   
   return 0;
}