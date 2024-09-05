#include <stdio.h>

int main(void) { 
   int a, b;
   scanf("%d %d", &a, &b);
   
   int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

   int date = 0;
   for(int i = 0; i < a - 1; i++){
      date += month[i];
   }

   date += b;

   if(date % 7 == 1)   printf("MON");
   else if(date % 7 == 2)   printf("TUE");
   else if(date % 7 == 3)   printf("WED");
   else if(date % 7 == 4)   printf("THU");
   else if(date % 7 == 5)   printf("FRI");
   else if(date % 7 == 6)   printf("SAT");
   else   printf("SUN");
   
   return 0;
}