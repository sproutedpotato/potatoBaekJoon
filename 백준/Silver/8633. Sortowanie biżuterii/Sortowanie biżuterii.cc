#include <stdio.h>
#include <string.h>

void sort(char arr[][201], int n) {
   for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
         char temp[201];
         int len_i = strlen(arr[i]);
         int len_j = strlen(arr[j]);
         if (len_i > len_j){
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[j]);
            strcpy(arr[j], temp);
         }
         else if(len_i == len_j){
            if (strcmp(arr[i], arr[j]) > 0) {
               strcpy(temp, arr[i]);
               strcpy(arr[i], arr[j]);
               strcpy(arr[j], temp);
            }
         }
      }
   }
}

void deleteSame(char arr[][201], int n){
   for(int i = 0; i < n; i++){
      if(strcmp(arr[i], arr[i + 1]) != 0){
         printf("%s\n", arr[i]);
      }
   }
}

int main(void) { 
   int a;
   scanf("%d", &a);

   char str[a][201];
   for(int i = 0; i < a; i++){
      scanf("%s", str[i]);
   }

   sort(str, a);
   deleteSame(str, a);

   return 0;
}