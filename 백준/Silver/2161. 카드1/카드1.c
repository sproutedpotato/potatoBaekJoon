#include <stdio.h>

int main(void) {   
   int num, temp;
   scanf("%d", &num);

   int card[num];
   for(int i = 0; i < num; i++){
      card[i] = i + 1;
   }

   int index = 0;
   int result[num];
   while (1){
      if(card[0] == -1){
         break;
      }
      result[index] = card[0];
      index += 1;
      for(int i = 0; i < num - index; i++){
         card[i] = card[i + 1];
      }
      temp = card[0];
      
      for(int i = 0; i < num - index; i++){
         card[i] = card[i + 1];
      }
      card[num - index - 1] = temp;
      card[num - index] = -1;
   }

   for(int i = 0; i < num; i++){
      printf("%d ", result[i]);
   }
   
   return 0;
}