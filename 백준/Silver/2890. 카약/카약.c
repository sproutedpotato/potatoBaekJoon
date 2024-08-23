#include <stdio.h>

int main(void) { 
   int height, length, flag, count = 1;
   scanf("%d %d", &height, &length);

   char map[height][length];
   for(int i = 0; i < height; i++){
      scanf("%s", map[i]);
   }
   
   char rank[10] = "000000000\0";
   for(int i = length - 2; i > 0; i--){
      flag = 0;
      for(int j = 0; j < height; j++){
         char c = map[j][i];
         if(c != '.' && rank[c - '0' - 1] == '0'){
            int k = c - '0';
            rank[k - 1] = count + '0';
            flag = 1;
         }
      }
      if(flag) count++;
   }

   for(int i = 0; i < 9; i++){
      printf("%c\n", rank[i]);
   }
   
   
   return 0;
}