#include <stdio.h>

int main(void) {  
   int a;
   scanf("%d", &a);

   int arr[a][2];
   for(int i = 0; i < a; i++){
      scanf("%d %d", &arr[i][0], &arr[i][1]);
   }
   
   int max_x = -10001, max_y = -10001, min_x = 10001, min_y = 10001;
   for(int i = 0; i < a; i++){
      if(arr[i][0] > max_x){
         max_x = arr[i][0];
      }
      if(arr[i][1] > max_y){
         max_y = arr[i][1];
      }
      if(arr[i][0] < min_x){
         min_x = arr[i][0];
      }
      if(arr[i][1] < min_y){
         min_y = arr[i][1];
      }
   }

   printf("%d", (max_x - min_x) * (max_y - min_y));
   
   return 0;
}