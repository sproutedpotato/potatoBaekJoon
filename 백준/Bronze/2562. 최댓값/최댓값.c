#include <stdio.h>

int main(void) {
   int Max, input, index;

   int arr[9];
   for(int i = 0; i < 9; i++){
      scanf("%d", &input);
      arr[i] = input;
   }

   Max = 0;
   for(int i = 0; i < 9; i++){
      if(arr[i] > Max){
         Max = arr[i];
         index = i + 1;
      }
   }

   printf("%d\n%d", Max, index);
   
   return 0;
}