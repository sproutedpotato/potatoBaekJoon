#include <stdio.h>
#include <string.h>

int main(void) { 
   char puzzle[10001];
   int index = 1;

   while(1){
      scanf("%s", puzzle);
      if(strcmp(puzzle, "0") == 0)   break;

      int flag = 1;
      int len = strlen(puzzle);
      if(puzzle[0] != '1' || puzzle[len - 1] != '2')   flag = 0;
      if(flag){
         for(int i = 0; i < len - 1; i++){
            if((puzzle[i] == '1' && i != 0) || puzzle[i] == '2'){
               flag = 0;
               break;
            }
            
            if(puzzle[i] == '1'){
               if(puzzle[i + 1] != '5' && puzzle[i + 1] != '4'){
                  flag = 0;
                  break;
               }
            }

            if(puzzle[i] == '3'){
               if(puzzle[i + 1] != '5' && puzzle[i + 1] != '4'){
                  flag = 0;
                  break;
               }
            }

            if(puzzle[i] == '4'){
               if(puzzle[i + 1] != '3' && puzzle[i + 1] != '2'){
                  flag = 0;
                  break; 
               }         
            }

            if(puzzle[i] == '5' && puzzle[i + 1] != '8'){
               flag = 0;
               break;
            }

            if(puzzle[i] == '6'){
               if(puzzle[i + 1] != '2' && puzzle[i + 1] != '3'){
                  flag = 0;
                  break;
               }
            }

            if(puzzle[i] == '7' && puzzle[i + 1] != '8'){
               flag = 0;
               break;
            }

            if(puzzle[i] == '8'){
               if(puzzle[i + 1] != '7' && puzzle[i + 1] != '6'){
                  flag = 0;
                  break;
               }
            }
         }
      }
      

      if(flag)   printf("%d. VALID\n", index);
      else   printf("%d. NOT\n", index);

      index++;
   }
   
   return 0;
}