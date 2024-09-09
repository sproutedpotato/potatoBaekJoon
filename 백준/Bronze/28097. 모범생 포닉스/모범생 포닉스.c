#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   int time[a];
   for(int i = 0; i < a; i++){
      scanf("%d", &time[i]);
   }

   for(int i = 0; i < a - 1; i++){
      time[i] += 8;
   }

   int result_day = 0, result_hour = 0, temp = 0;
   for(int i = 0; i < a; i++){
      temp += time[i];
   }

   result_day = temp / 24;
   result_hour = temp % 24;

   printf("%d %d", result_day, result_hour);
   
   return 0;
}