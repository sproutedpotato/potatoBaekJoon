#include <stdio.h>
#include <string.h>

int main(void) {
   char arr[11];
   scanf("%s", arr);

   int N;
   scanf("%d", &N);
   char new_arr[6], new_myarr[N][6];

   char my_arr[N][11];
   for(int i = 0; i < N; i++){
      scanf("%s", my_arr[i]);
   }

   int result = 0;

   strncpy(new_arr, arr, 5);
   new_arr[5] = '\0';  

   for(int i = 0; i < N; i++){
      strncpy(new_myarr[i], my_arr[i], 5);
      new_myarr[i][5] = '\0';
   }

   for(int i = 0; i < N; i++){
      if(strcmp(new_arr, new_myarr[i]) == 0){
         result++;
      }
   }

   printf("%d", result);
  
   return 0;
}