#include <stdio.h>
#include <string.h>

int main(void) { 
   char ip[10];
   while(1){
      scanf("%s", ip);
      if(strcmp(ip, "end") == 0)   break;

      int status = 1;
      int X = 0, O = 0, dot = 0;
      int slot[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};

      int x_count = 0, o_count = 0;
      for(int i = 0; i < 9; i++){
         if(ip[i] == 'X')   x_count += 1;
         else if(ip[i] == 'O')   o_count += 1;
         else   dot = 1;
      }

      if(x_count < o_count || x_count > o_count + 1)   status = 0;
      else{
         for(int j = 0; j < 8; j++){
            if(ip[slot[j][0]] == ip[slot[j][1]] && ip[slot[j][1]] == ip[slot[j][2]]){
               if(ip[slot[j][0]] == 'X')   X = 1;
               else if(ip[slot[j][0]] == 'O')   O = 1;
            }
         }
      }

      if(X && O)   status = 0;
      if(X && x_count != o_count + 1)   status = 0;
      if(O && o_count != x_count)   status = 0;
      if(!X && !O && dot)   status = 0;

      if(status)   printf("valid\n");
      else   printf("invalid\n");
   }
   
   return 0;
}