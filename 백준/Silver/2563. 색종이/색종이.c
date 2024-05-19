#include <stdio.h>

int main(void) {  
   int map[100][100] = {0};
   int a, x, y;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      scanf("%d %d", &x, &y);
      for(int j = 0; j < 10; j++){
         for(int k = 0; k < 10; k++){
            map[x + j][y + k] = 1;
         }
      }
   }

   int result = 0;
   for(int i = 0; i < 100; i++){
      for(int j = 0; j < 100; j++){
         if(map[i][j] == 1){
            result++;
         }
      }
   }

   printf("%d", result);
   
   return 0;
}