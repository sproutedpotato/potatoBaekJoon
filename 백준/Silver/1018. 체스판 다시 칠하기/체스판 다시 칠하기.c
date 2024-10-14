#include <stdio.h>
#include <string.h>

int getMin(int a, int b){
   if(a > b)   return b;
   else   return a;
}

int main(void) { 
   int a, b;
   scanf("%d %d", &a, &b);
   char arr[a][b + 1];

   for(int i = 0; i < a; i++){
      scanf("%s", arr[i]);
   }

   int result = a * b + 1, temp_a, temp_b;
   char chess_a[8][8] = {"WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", 
   "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW"};
   char chess_b[8][8] = {"BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", 
   "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB"};


   for(int i = 0; i < a - 7; i++){
      for(int j = 0; j < b - 7; j++){
         temp_a = 0;
         temp_b = 0;
         for(int k = 0; k < 8; k++){
            for(int l = 0; l < 8; l++){
               if(arr[k + i][l + j] != chess_a[k][l]){
                  temp_a += 1;
               }
               if(arr[k + i][l + j] != chess_b[k][l]){
                  temp_b += 1;
               }
            }
         }
         result = getMin(result, getMin(temp_a, temp_b));
      }
   }

   printf("%d", result);
   
   return 0;
}