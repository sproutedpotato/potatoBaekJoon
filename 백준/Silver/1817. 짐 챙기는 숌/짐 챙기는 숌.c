#include <stdio.h>

int main(void) { 
   int a, b;
   scanf("%d %d", &a, &b);

   int book[a], result = 0, current_box = 0;
   for(int i = 0; i < a; i++){
      scanf("%d", &book[i]);

      if(current_box + book[i] < b){
         current_box += book[i];
      }
         
      else if(current_box + book[i] == b){
         current_box = 0;
         result += 1;
      }
         
      else if(current_box + book[i] > b){
         current_box = book[i];
         result += 1;
      }

      if(i == a - 1 && current_box != 0){
         result += 1;
      }
   }

   printf("%d", result);
   
   return 0;
}