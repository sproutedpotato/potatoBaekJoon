#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) { 
   int a, b, index = 0, current = 1, flag;
   char temp[8];
   scanf("%d %d", &a, &b);

   while(1){
      flag = 1;
      sprintf(temp, "%d", current);
      for(int k = 0; k < strlen(temp); k++){
         if(temp[k] == b + '0'){
            flag = 0;
            break;
         }
      }
      if(flag){
         index += 1;
      }   

      if(index == a)   break;
      current += 1;
   }

   printf("%d", current);   

   return 0;
}