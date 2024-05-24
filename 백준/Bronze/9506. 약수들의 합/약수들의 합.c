#include <stdio.h>

int main(void) {  
   int a, sum, count, arr[100000];
   
   while(1){
      scanf("%d", &a);
      sum = 0;
      count = 0;

      if (a == -1){
         break;
      }
      for(int i = 1; i < a; i++){
         if(a % i == 0){
            sum += i;
            count += 1;
            arr[count - 1] = i;
         }
      }

      if(sum == a){
         printf("%d = ", a);
         for(int i = 0; i < count; i++){
            if(i < count - 1){
               printf("%d + ", arr[i]);
            }
            else{
               printf("%d", arr[i]);
            }
         }
         printf("\n");
      }
      else{
         printf("%d is NOT perfect.\n", a);
      }
   }

   
   return 0;
}