#include <stdio.h>

int main(void) {  
   int a, b, num = 0, sum = 0;
   scanf("%d", &a);
   scanf("%d", &b);

   for(int i = a; i < b + 1; i++){
      int count = 0;
      for(int j = 1; j < i + 1; j++){
         if(i % j == 0){
            count += 1;
         }
      }
      if(count == 2 && num == 0){
         num = i;
      }
      if(count == 2){
         sum += i;
      }
   }

   if(sum == 0){
      printf("-1");
   }
   else{
      printf("%d\n%d",sum ,num);
   }
   
   return 0;
}