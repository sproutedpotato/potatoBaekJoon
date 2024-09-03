#include <stdio.h>
#include <stdlib.h>

int main(void) { 
   
   int destination, current, index;
   scanf("%d %d", &current, &destination);

   int n, flag = 0;
   scanf("%d", &n);

   int arr[n], count = 0, min = abs(current - destination);
   for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
      if(arr[i] == destination){
         count += 1;
      }
   }

   if(count == 0){
      for(int i = 0; i < n; i++){
         if(min > abs(arr[i] - destination)){
            min = abs(arr[i] - destination);
            index = i;
            flag = 1;
         }
      }
   }
   
   if(count > 0) printf("%d", count);
   else {
      if(flag)   printf("%d", min + 1);
      else   printf("%d", min);
   }
   return 0;
}