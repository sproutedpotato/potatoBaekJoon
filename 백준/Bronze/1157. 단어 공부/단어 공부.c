#include <stdio.h>
#include <string.h>

int main(void) {   
   int big[26] = {0};
   char string[1000001];
   scanf("%s", string);
   
   int length = strlen(string);
   for(int i = 0; i < length; i++){
      if((int)string[i] >= 97){
         big[(int)string[i] - (int)'a'] += 1;
      }
      else{
         big[(int)string[i] - (int)'A'] += 1;
      }
   }
   
   int max = -1;
   int index;
   int total = 0;
   for(int i = 0; i < 26; i++){
      if(big[i] > max){
         max = big[i];
         index = i;
         total = 0;
      }
      else if (big[i] == max){
         total += 1;
      }
   }
   
   if(total == 0){
      printf("%c", (char)(index + (int)'A'));
   }
   else{
      printf("?");
   }
   
   
   return 0;
}