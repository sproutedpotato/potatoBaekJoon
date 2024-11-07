#include <stdio.h>

int main(void) { 
   int arr[5], index = 0;

   for(int i = 0; i < 5; i++){
      scanf("%d", &arr[i]);      
   }

   while(1){
      if(arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 4 && arr[4] == 5){
         break;
      }

      if(arr[index] > arr[index + 1]){
         int temp = arr[index];
         arr[index] = arr[index + 1];
         arr[index + 1] = temp;

         for(int i = 0; i < 5; i++){
            printf("%d ", arr[i]);
         }
         printf("\n");
      }

      

      index += 1;
      if(index == 4){
         index = 0;
      }
   }

   return 0;
}