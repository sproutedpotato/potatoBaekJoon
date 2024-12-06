#include <stdio.h>

int main(void) { 
   int arr[4];
   for(int i = 0; i < 3; i++){
      int count = 0;
      for(int i = 0; i < 4; i++){
         scanf("%d", &arr[i]);
         if(arr[i] == 1){
            count++;
         }
      }

      if(count == 4){
         printf("E\n");
      }
      else if(count == 3){
         printf("A\n");
      }
      else if(count == 2){
         printf("B\n");
      }
      else if(count == 1){
         printf("C\n");
      }
      else{
         printf("D\n");
      }
      
   }
   
   
   return 0;
}