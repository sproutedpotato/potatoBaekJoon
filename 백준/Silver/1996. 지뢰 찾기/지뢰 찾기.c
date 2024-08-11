#include <stdio.h>

int main(void) { 
   int a, result;
   scanf("%d", &a);

   char input_arr[a][a + 1];
   for(int i = 0; i < a; i++){
      scanf("%s", input_arr[i]);
      input_arr[i][a + 1] = '\0';
   }

   int arr[a][a];
   for(int i = 0; i < a; i++){
      for(int j = 0; j < a; j++){
         if(input_arr[i][j] == '.'){
            arr[i][j] = 0;
         }
         else{
            arr[i][j] = input_arr[i][j] - '0';
         }
      }
   }

   for(int i = 0; i < a; i++){
      for(int j = 0; j < a; j++){
         result = 0;
         if(arr[i][j] != 0){
             printf("*");
         } else {
             if(i > 0 && j > 0) result += arr[i - 1][j - 1];
             if(i > 0) result += arr[i - 1][j];
             if(i > 0 && j < a - 1) result += arr[i - 1][j + 1];
             if(j > 0) result += arr[i][j - 1];
             if(j < a - 1) result += arr[i][j + 1];
             if(i < a - 1 && j > 0) result += arr[i + 1][j - 1];
             if(i < a - 1) result += arr[i + 1][j];
             if(i < a - 1 && j < a - 1) result += arr[i + 1][j + 1];

             if(result >= 10){
                 printf("M");
             } else {
                 printf("%d", result);
             }
         }
      }
      printf("\n");
   }

   return 0;
}