#include <stdio.h>
#include <stdlib.h>

int main(void) { 
   int mushroom[10], prev_sum, result;
   for(int i = 0; i < 10; i++){
      scanf("%d", &mushroom[i]);
   }

   int sum = 0;
   for(int i = 0; i < 10; i++){
      prev_sum = sum;
      
      if(sum + mushroom[i] <= 100){
         sum += mushroom[i];
      }
      else{
         sum += mushroom[i];
         if(abs(prev_sum - 100) < abs(sum +  - 100)){
            result = prev_sum;
            printf("%d", result);

            return 0;
         }
         else{
            result = sum;
            printf("%d", result);

            return 0;
         }
      }
   }

   
   printf("%d", sum);
   return 0;
}