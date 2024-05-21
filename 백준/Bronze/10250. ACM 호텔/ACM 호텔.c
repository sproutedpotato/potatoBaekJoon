#include <stdio.h>

int main(void) {  
   int T, floor, room, guest, selected_room, result;
   scanf("%d", &T);
 
   for(int j = 0; j < T; j++){
      scanf("%d %d %d", &floor, &room, &guest);
      selected_room = 1;
      while(1){
         if (floor >= guest){
            break;
         }
         else{
            guest -= floor;
         }
         selected_room += 1;
      }

      result = 100 * guest + selected_room;

      printf("%d\n", result);
   }

   return 0;
}