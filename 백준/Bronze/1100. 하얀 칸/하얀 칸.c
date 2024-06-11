#include <stdio.h>

int main(void) { 
   char chess[8][9];
   int count = 0;
   
   for(int i = 0; i < 8; i++){
      scanf("%s", chess[i]);

      if(i % 2 == 0){
        for(int j = 0; j < 8; j++){
           if(chess[i][j] == 'F' && j % 2 == 0){
              count += 1;
           }
        }
      }
      else{
         for(int j = 0; j < 8; j++){
              if(chess[i][j] == 'F' && j % 2 == 1){
                 count += 1;
              }
           }
      }
   }

   printf("%d", count);

   return 0;
}