#include <stdio.h>

int main(void) { 
   int row, col, num;
   int coor[8][2] = {{-1, 1}, {0, 1}, {1, 1}, {-1, 0}, {1, 0}, {-1, -1}, {0, -1}, {1, -1}};
   
   while(1){
      scanf("%d %d", &row, &col);
      if(row == 0 && col == 0) break;

      char mine[row][col + 1];
      for(int i = 0; i < row; i++){
         scanf("%s", mine[i]);
      }

      for(int i = 0; i < row; i++){
         for(int j = 0; j < col; j++){
            num = 0;
            if(mine[i][j] == '*') printf("*");
            else{
               for(int k = 0; k < 8; k++){
                  if(i + coor[k][0] >= 0 && i + coor[k][0] < row && j + coor[k][1] >= 0 && j + coor[k][1] < col){
                     if(mine[i + coor[k][0]][j + coor[k][1]] == '*'){
                        num += 1;
                     }
                  }
               }
               printf("%d", num);
            }
         }
         printf("\n");
      }
      
   }

   
   return 0;
}