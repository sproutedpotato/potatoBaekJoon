#include <stdio.h>
#include <string.h>

int main(void) { 
   char num[72];
   scanf("%s", num);

   if(strcmp(num, "1") == 0){
      printf("1");
      return 0;
   }
   
   int carry = 0;
   int length = strlen(num);
   for(int i = length - 1; i > -1; i--){
      if((num[i] - '0') * 2 > 9){
         num[i] = (num[i] - '0') * 2 - 10 + carry + '0';
         carry = 1;
      }
      else{
         num[i] = (num[i] - '0') * 2 + carry + '0';
         carry = 0;
      }
   }

   if(carry == 1){
      char temp[100];
      strcpy(temp, num);
      strcpy(num, "1");
      strcat(num, temp);
   }

   int under_carry = 0;
   int length2 = strlen(num);
   for(int i = length2 - 1; i > -1; i--){
      if(i == length2 - 1)   num[i] = (num[i] - '0') - 2 + under_carry + '0';
      else   num[i] = (num[i] - '0') + under_carry + '0';
      
      if(num[i] < '0') {
         num[i] += 10;
         under_carry = -1;
      } 
      else {
         break;
      }
   }

   if(num[0] != '0')   printf("%c", num[0]);
   for(int i = 1; i < length2; i++){
      printf("%c", num[i]);
   }
   
   return 0;
}