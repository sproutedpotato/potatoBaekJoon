#include <stdio.h>
#include <string.h>

int d(int n){
   int result = 0;

   if(n < 10)
      result = n + n % 10;

   else if(n < 100)
      result = n + n / 10 + n % 10;

   else if(n < 1000)
      result = n + n / 100 + n / 10 % 10 + n % 10;
   
   else
      result = n + n / 1000 + n / 100 % 10 + n / 10 % 10 + n % 10;

   return result;
}

int main(void) { 
   int arr[10000] = {0}, index = 1;

   for(int i = 0; i < 10000; i++){
      if(arr[d(i + 1) - 1] == 0){
         arr[d(i + 1) - 1] = 1;
      }
   }

   for(int i = 0; i < 10000; i++){
      if(arr[i] == 0){
         printf("%d\n", i + 1);
      }
   }
   
   return 0;
}