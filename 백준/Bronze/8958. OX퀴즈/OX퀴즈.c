#include <stdio.h>
#include <string.h>

int main(void) {  
   char str[81];
   int a;
   scanf("%d", &a);
 
   for(int j = 0; j < a; j++){
      scanf("%s", str);

      int total = 0, sum = 0;
      int length = strlen(str);
      for(int i = 0; i < length; i++){
         if(str[i] == 'O'){
            total += 1;
         }
         else{
            total  = 0;
         }

         sum += total;
      }

      printf("%d\n", sum);
   }

   return 0;
}