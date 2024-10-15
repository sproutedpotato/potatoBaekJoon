#include <stdio.h>

int getMax(int a, int b){
   if(a > b)   return a;
   else   return b;
}

int main(void) { 
   int a, b;
   scanf("%d %d", &a, &b);
   
   int arr[a];
   int result = 0;
   for (int i = 0; i < a; i++) {
      scanf("%d", &arr[i]);
   }

   for (int i = 0; i < a; i++) {
      for(int j = i + 1; j < a; j++){
         for(int k = j + 1; k < a; k++){
            if(arr[i] + arr[j] + arr[k] <= b)
               result = getMax(result, arr[i] + arr[j] + arr[k]);
         }
      }
   }

   printf("%d", result);
   
   return 0;
}