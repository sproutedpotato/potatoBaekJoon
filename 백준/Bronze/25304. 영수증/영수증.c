#include <stdio.h>

int main(void) {
   int total, sum, input, price, num;
   scanf("%d", &total);
   scanf("%d", &input);

   sum = 0;
   for(int i = 0; i < input; i++){
      scanf("%d %d", &price, &num);
      sum += price * num;
   }
   if(total == sum){
      printf("Yes");
   }
   else{
      printf("No");
   }
}