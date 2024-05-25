#include <stdio.h>

int main(void) {  
   int a;
   scanf("%d", &a);

   int arr[a], result = 0, count;

   for(int i = 0; i < a; i++){
      scanf("%d", &arr[i]);
   }

   for(int i = 0; i < a; i++){
      count = 0;
      for(int j = 1; j < arr[i] + 1; j++){
         if(arr[i] % j == 0){
            count += 1;
         }
      }
      if(count == 2){
         result += 1;
      }
   }
   
   printf("%d", result);

   return 0;
}