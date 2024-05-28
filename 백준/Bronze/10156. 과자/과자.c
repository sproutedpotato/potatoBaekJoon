#include <stdio.h>

int main(void) {  
   int snack, num, money;
   scanf("%d %d %d", &snack, &num, &money);

   int sum = snack * num;
   if(sum > money)
      printf("%d", sum - money);
   else
      printf("0");
}