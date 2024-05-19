#include <stdio.h>

int main(void) {  
   int a[9][9], b[9][2];

   int max_row, max, temp = -1, col, row;
   for(int i = 0; i < 9; i++){
      for(int j = 0; j < 9; j++){
         scanf("%d", &a[i][j]);
      }
   }

   for(int i = 0; i < 9; i++){
      max_row = 0;
      max = 0;
      for(int j = 0; j < 9; j++){
         if(a[i][j] > max){
            max_row = j;
            max = a[i][j];
         }
      }
      b[i][0] = max;
      b[i][1] = max_row;
   }

   for(int i = 0; i < 9; i++){
      if(b[i][0] > temp){
         temp = b[i][0];
         col = i;
         row = b[i][1];
      }
   }

   printf("%d\n", temp);
   printf("%d %d", col + 1, row + 1);
   
}