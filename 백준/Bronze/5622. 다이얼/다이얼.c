#include <stdio.h>
#include <string.h>

int main(void) {   
   int time = 0;
   char str[16];
   scanf("%s", str);

   int length = strlen(str);
   for(int i = 0; i < length; i++){
      if((int)str[i] < 68){
         time += 3;
      }
      else if((int)str[i] < 71){
         time += 4;
      }
      else if((int)str[i] < 74){
         time += 5;
      }
      else if((int)str[i] < 77){
         time += 6;
      }
      else if((int)str[i] < 80){
         time += 7;
      }
      else if((int)str[i] < 84){
         time += 8;
      }
      else if((int)str[i] < 87){
         time += 9;
      }
      else{
         time += 10;
      }
   }

   printf("%d", time);
   return 0;
}