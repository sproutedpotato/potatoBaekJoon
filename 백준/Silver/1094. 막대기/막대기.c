#include <stdio.h>

int main(void) { 
   int a, result = 1;
   int stick1 = 64, stick2;
   scanf("%d", &a);
   
   while(1){
      if(stick1 <= a){
         break;
      }

      if(stick1 > a){
         stick1 /= 2;
      }
   }

   stick2 = stick1;
   while(1){
      if(stick1 == a){
         break;
      }
      if(stick1 + stick2 > a){
         stick2 /= 2;
      }
      else{
         stick1 += stick2;
         result += 1;
      }
   }
   

   printf("%d", result);

   return 0;
}