#include <stdio.h>

int max(int arr[], int length){
   int Max = arr[0];
   for(int i = 0; i < length; i++){
      if(arr[i] > Max){
         Max = arr[i];
      }
   }
   return Max;
}
int min(int arr[], int length){
   int Min = arr[0];
   for(int i = 0; i < length; i++){
      if(arr[i] < Min){
         Min = arr[i];
      }
   }
   return Min;
}

int main(void) {
   int a, input;
   scanf("%d", &a);

   int arr[a];
   for(int i = 0; i < a; i++){
      scanf("%d", &input);
      arr[i] = input;
   }

   printf("%d %d", min(arr, a), max(arr, a));
   
   return 0;
}