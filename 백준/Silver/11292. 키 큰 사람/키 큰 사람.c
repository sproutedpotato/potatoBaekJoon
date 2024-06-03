#include <stdio.h>

float getmax(float arr[], int length){
   float max = 0;
   for(int i = 0; i < length; i++){
      if (max < arr[i]){
         max = arr[i];
      }
   }

   return max;
}

int main(void) { 
   int a;

   while(1){
      scanf("%d", &a);

      if(a == 0){
         break;
      }

      char name[a][11];
      float height[a];
      
      for(int i = 0; i < a; i++){
         scanf("%s %f", name[i], &height[i]);
      }

      float num = getmax(height, a);

      for(int i = 0; i < a; i++){
         if (height[i] == num){
            printf("%s ", name[i]);
         }
      } 
      printf("\n");
   }

   return 0;
}