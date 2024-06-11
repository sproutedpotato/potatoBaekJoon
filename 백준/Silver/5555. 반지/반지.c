#include <stdio.h>
#include <string.h>

int main(void) { 
   char letter[11], ring[11];
   scanf("%s", letter);

   int ring_num, length = strlen(letter), result = 0;
   scanf("%d", &ring_num);

   for(int i = 0; i < ring_num; i++){
      int index, flag = 0;
      scanf("%s", ring);
      for(int j = 0; j < 10; j++){
         if(ring[j] == letter[0]){
            flag = 1;
            index = j;

            for(int k = 0; k < length; k++){
               if(index >= 10){
                  index = 0;
               }
               if(ring[index] == letter[k]){
                  index++;
               }
               else{
                  flag = 0;
                  break;
               }
            }
         }
         if(flag){
            break;
         }
      }
      
      if (flag) result += 1;
   }

   printf("%d", result);

   return 0;
}