#include <stdio.h>
#include <string.h>

int main(void) { 
   int a, flag;
   scanf("%d", &a);

   char str[a][51];
   for(int i = 0; i < a; i++){
      scanf("%s", str[i]);
   }

   char temp[51];
   strcpy(temp, str[0]);
   
   for(int i = 0; i < strlen(str[0]); i++){
      flag = 1;
      for(int j = 1; j < a; j++){
         if(str[j][i] != temp[i]){
            flag = 0;
         }
      }
      if(flag){
         printf("%c", temp[i]);
      }
      else{
         printf("?");
      }
   }
   
   return 0;
}