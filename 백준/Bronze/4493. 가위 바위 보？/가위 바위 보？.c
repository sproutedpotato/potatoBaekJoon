#include <stdio.h>

int main(void) { 
   int a, b;
   char p1, p2;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      scanf("%d", &b);
      getchar();
      int count1 = 0, count2 = 0;
      for(int j = 0; j < b; j++){
         scanf("%c %c", &p1, &p2);
         getchar();
         if (p1 != p2) {
            if ((p1 == 'R' && p2 == 'S') || 
               (p1 == 'S' && p2 == 'P') || 
               (p1 == 'P' && p2 == 'R')) {
                  count1++;
            }
            else {
               count2++;
            }
         }
      }
      if(count1 > count2){
         printf("Player 1\n");
      }
      else if(count1 < count2){
         printf("Player 2\n");
      }
      else{
         printf("TIE\n");
      }
   }
   
   return 0;
}