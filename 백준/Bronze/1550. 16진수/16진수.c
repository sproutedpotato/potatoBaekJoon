#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) { 
   char str[7];
   scanf("%s", str);

   int length = strlen(str);
   int result = 0, index = length - 1;
   for(int i = 0; i < length; i++){
      if((int)str[i] >= 65){
         result += ((int)str[i] - 55) * pow(16, index);
      }
      else{
         result += ((int)str[i] - 48) * pow(16, index);
      }
      index -= 1;
   }

   printf("%d", result);
   
   return 0;
}