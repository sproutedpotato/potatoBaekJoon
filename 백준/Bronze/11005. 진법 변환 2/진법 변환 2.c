#include <stdio.h>
#include <string.h>

int main(void) {  
   long a;
   int b, per, flag;

   scanf("%d %d", &a, &b);

   int index = 0; flag = 0;
   char nums[26];
   while(1){
      if (a >= b){
         per = a % b;
         a = a / b;
      }
      else{
         per = a;
         flag = 1;
      }
      
      if (per >= 10){
         nums[index] = (char)(per + 55);
      }
      else{
         nums[index] = (char)(per + 48);
      }
      index += 1;

      if(flag){
         nums[index] = '\0';
         break;
      }
   }

   int length = strlen(nums);
   for(int i = length - 1; i > -1; i--){
      printf("%c", nums[i]);
   }
   
   return 0;
}