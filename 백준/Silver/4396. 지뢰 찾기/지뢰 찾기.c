#include <stdio.h>

int main(void) { 
   int a, result, flag = 0;
   scanf("%d", &a);

   char input_arr[a][a + 1];
   char map[a][a + 1];
   for(int i = 0; i < a; i++){
      scanf("%s", input_arr[i]);
      input_arr[i][a + 1] = '\0';
   }

   for(int i = 0; i < a; i++){
      scanf("%s", map[i]);
      map[i][a + 1] = '\0';
   }

   char arr[a][a + 1];
   for(int i = 0; i < a; i++){
      for(int j = 0; j < a; j++){
         if(map[i][j] == 'x'){
            if(input_arr[i][j] == '*'){
               arr[i][j] = '*';
            }
            else{
               arr[i][j] = '0';
            }
         }
         else{
            arr[i][j] = '.';
         }
      }
      arr[i][a + 1] = '\0';
   }

   for(int i = 0; i < a; i++){
      for(int j = 0; j < a; j++){
         result = 0;
         if(arr[i][j] == '0'){
            if(i > 0 && j > 0 && input_arr[i - 1][j - 1] == '*') result += 1;
            if(i > 0 && input_arr[i - 1][j] == '*') result += 1;
            if(i > 0 && j < a - 1 && input_arr[i - 1][j + 1] == '*') result += 1;
            if(j > 0 && input_arr[i][j - 1] == '*') result += 1;
            if(j < a - 1 && input_arr[i][j + 1] == '*') result += 1;
            if(i < a - 1 && j > 0 && input_arr[i + 1][j - 1] == '*') result += 1;
            if(i < a - 1 && input_arr[i + 1][j] == '*') result += 1;
            if(i < a - 1 && j < a - 1 && input_arr[i + 1][j + 1] == '*') result += 1;

            arr[i][j] = result + '0';
         }
         else if(arr[i][j] == '*'){
            flag = 1;
         }
      }
   }

   for(int i = 0; i < a; i++){
      for(int j = 0; j < a; j++){
         if(flag && input_arr[i][j] == '*'){
            printf("*");
         }
         else{
            printf("%c", arr[i][j]);
         } 
      }
      printf("\n");
   }

   return 0;
}