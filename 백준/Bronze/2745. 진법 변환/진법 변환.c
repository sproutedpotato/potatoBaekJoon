#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {  
   char str[6];
   int n;

   scanf("%s %d", str, &n);

   int length = strlen(str);
   int num[length];
   
   for(int i = 0; i < length; i++){
      if ((int)str[i] >= 65){
         num[i] = (int)str[i] - 55;
      }
      else{
         num[i] = (int)str[i] - 48;
      }
   }   
   
   int sum = 0;
   for(int i = 0; i < length; i++){
      sum += num[length - 1 - i] * (int)pow(n, i);
   }

   printf("%d", sum);
   
   return 0;
}