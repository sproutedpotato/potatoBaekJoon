#include <stdio.h>
#include <math.h>

int main(void) {  
   int a, b, c;

   while(1){
      scanf(" %d %d %d", &a, &b, &c);
      if(a == 0 && b == 0 && c == 0){
         break;
      }

      if ((int)pow(a, 2) + (int)pow(b, 2) == (int)pow(c, 2)){
         printf("right\n");
      }
      else if((int)pow(a, 2) == (int)pow(b, 2) + (int)pow(c, 2)){
         printf("right\n");
      }
      else if((int)pow(a, 2) + (int)pow(c, 2) == (int)pow(b, 2)){
         printf("right\n");
      }
      else{
         printf("wrong\n");
      }
   }

   return 0;
}