#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   int thropy[a], height_left = 0, max;

   for(int i = 0; i < a; i++){
      scanf("%d", &thropy[i]);
   }

   for(int i = 0; i < a; i++){
      if(i == 0){
         height_left += 1;
         max = thropy[i];
      }
      else if(i > 0 && i < a - 1){
         if(thropy[i - 1] < thropy[i] && thropy[i] > max){
            height_left += 1;
            max = thropy[i];
         }
      }
      else{
         if(thropy[i - 1] < thropy[i] && thropy[i] > max){
            height_left += 1;
         }
      }
   }

   int height_right = 0;
   
   for(int i = a - 1; i > -1; i--){
      if(i == a - 1){
         height_right += 1;
         max = thropy[i];
      }
      else if(i > 0 && i < a - 1){
         if(thropy[i + 1] < thropy[i] && thropy[i] > max){
            height_right += 1;
            max = thropy[i];
         }
      }
      else{
         if(thropy[i + 1] < thropy[i] && thropy[i] > max){
            height_right += 1;
         }
      }
   }

   printf("%d\n%d", height_left, height_right);
   
   return 0;
}