#include <stdio.h>

int main(void) {  
   int num;
   scanf("%d", &num);

   int arr[num], a, b = 0, index = 0;
   long sum = 0;

   while(1){
      if(b == num){
         break;
      }
      scanf("%d", &a);

      arr[index] = a;
      if(a == 0){
         index -= 1;
         sum -= arr[index];
      }
      else{
         index += 1;
         sum += a;
      }
      b += 1;
   }
   
   printf("%ld", sum);
   
   return 0;
}