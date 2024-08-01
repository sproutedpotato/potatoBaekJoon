#include <stdio.h>

int main(void) { 
   int arr[100][100] = {0};
   int x1, x2, y1, y2, result = 0;

   for(int i = 0; i < 4; i++){
      scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

      for(int j = 0; j < x2 - x1; j++){
         for(int k = 0; k < y2 - y1; k++){
            arr[x1 + j][y1 + k] = 1;
         }
      }
   }

   for(int i = 0; i < 100; i++){
      for(int j = 0; j < 100; j++){
         if(arr[i][j] == 1){
            result += 1;
         }
      }
   }


   printf("%d", result);

   return 0;
}