#include <stdio.h>

int main(void) {  
   int a, b;
   scanf("%d %d", &a, &b);
   int first[a][b], second[a][b];
   
   for(int i = 0; i < a; i++){
      for(int j = 0; j < b; j++){
         scanf("%d", &first[i][j]);
      }
   }

   for(int i = 0; i < a; i++){
      for(int j = 0; j < b; j++){
         scanf("%d", &second[i][j]);
      }
   }

   for(int i = 0; i < a; i++){
      for(int j = 0; j < b; j++){
         first[i][j] += second[i][j];
      }
   }

   for(int i = 0; i < a; i++){
      for(int j = 0; j < b; j++){
         printf("%d " , first[i][j]);
      }
      printf("\n");
   }
   
   return 0;
}