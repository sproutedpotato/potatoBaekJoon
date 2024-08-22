#include <stdio.h>

int main(void) { 
   int length, basket, apple;
   scanf("%d %d", &length, &basket);
   scanf("%d", &apple);

   int apple_arr[apple];
   for(int i = 0; i < apple; i++){
      scanf("%d", &apple_arr[i]);
   }

   int start = 1, end = basket, count = 0;
   
   for(int i = 0; i < apple; i++){
      while(1){
         if(apple_arr[i] >= start && apple_arr[i] <= end){
            break;
         }
         else if(apple_arr[i] > end){
            start += 1;
            end += 1;
         }
         else if(apple_arr[i] < start){
            start -= 1;
            end -= 1;
         }
         count += 1;
      }      
   }

   printf("%d", count);
   
   return 0;
}