#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) { 
   int a;
   scanf("%d", &a);
   for(int k = 0; k < a; k++){
      char string[10001];
      
      scanf("%s", string);

      int len = strlen(string);
      int count = sqrt(len);

      char new_str[count][count + 1];
      for(int i = 0; i < count; i++){
         for(int j = 0; j < count; j++){
            new_str[i][j] = string[i * count + j];
         }
         new_str[i][count] = '\0';
      }
      for(int i = count - 1; i > -1; i--){
         for(int j = 0; j < count; j++){
            printf("%c", new_str[j][i]);
         }
      }
      printf("\n");
   }

   return 0;
}