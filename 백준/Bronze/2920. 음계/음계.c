#include <stdio.h>

int main(void) {  
   int arr[8];
   for(int i = 0; i < 8; i++){
      scanf("%d", &arr[i]);
   }

   int isAecending = 1, isDescending = 1;
   for(int i = 0; i < 8; i++){
      if (arr[i] != i + 1){
         isAecending = 0;
      }
      if (arr[i] != 8 - i){
         isDescending = 0;
      }
   }

   if(isAecending){
      printf("ascending");
   }
   else if(isDescending){
      printf("descending");
   }
   else{
      printf("mixed");
   }
   
   return 0;
}