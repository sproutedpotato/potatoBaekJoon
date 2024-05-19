#include <stdio.h>

int main(void) {  
   int a, b;
   scanf("%d %d", &a, &b);
   
   int num = 1;
   int index = 0;
   int arr[1000] = {0};
   
   while(index < 1000){
      for(int i = 0; i < num && index < 1000; i++){
         arr[index] = num;
         index += 1;
      }
      num += 1;
   }
   int sum = 0;
   for(int i = a - 1; i < b; i++){
      sum += arr[i];
   }

   printf("%d", sum);
}