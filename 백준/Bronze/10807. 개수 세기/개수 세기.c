#include <stdio.h>

int main(void) {
   int a, num, result, input;
   scanf("%d", &a);

   int arr[a];
   for(int i = 0; i < a; i++){
      scanf("%d", &input);
      arr[i] = input;
   }

   scanf("%d", &num);
   result = 0;
   for(int i = 0; i < a; i++){
      if(arr[i] == num){
         result += 1;
      }
   }

   printf("%d", result);
   
   return 0;
}