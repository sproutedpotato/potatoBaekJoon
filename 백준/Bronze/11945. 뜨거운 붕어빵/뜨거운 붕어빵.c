#include <stdio.h>

int main(void) { 
   int a, b;
   scanf("%d %d", &a, &b);

   char fishbread[a][b];
   for(int i = 0; i < a; i++){
      scanf("%s", fishbread[i]);
   }

   for(int i = 0; i < a; i++){
      for(int j = b - 1; j > -1; j--){
         printf("%c", fishbread[i][j]);
      }
      printf("\n");
   }
   

   return 0;
}