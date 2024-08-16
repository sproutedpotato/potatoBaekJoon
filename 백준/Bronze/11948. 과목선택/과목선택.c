#include <stdio.h>

void sort(int arr[], int length){
   for(int i = 0; i < length - 1; i++){
      for(int j = i; j < length; j++)
         if(arr[i] < arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
   }
}

int main(void) { 
   int sci[4];
   int soc[2];

   for(int i = 0; i < 4; i++){
      scanf("%d", &sci[i]);
   }
   
   for(int i = 0; i < 2; i++){
      scanf("%d", &soc[i]);
   }

   sort(sci, 4);
   sort(soc, 2);

   printf("%d", sci[0] + sci[1] + sci[2] + soc[0]);
   
   return 0;
}