#include <stdio.h>

int main(void) {   
   int chess_arr[6] = {1, 1, 2, 2, 2, 8};
   int myChess[6];
   scanf("%d %d %d %d %d %d", &myChess[0], &myChess[1], &myChess[2], &myChess[3], &myChess[4], &myChess[5]);

   for (int i = 0; i < 6; i++){
      printf("%d ", chess_arr[i] - myChess[i]);
   }
   
   return 0;
}