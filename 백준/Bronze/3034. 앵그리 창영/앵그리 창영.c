#include <stdio.h>
#include <math.h>

int main(void) { 
   int a, b, c, k;
   scanf("%d %d %d", &a, &b, &c);

   int length = (int)sqrt(pow(b, 2) + pow(c, 2));
   for(int i = 0; i < a; i++){  
      scanf("%d", &k);
      if(k <= length){
         printf("DA\n");
      }
      else{
         printf("NE\n");
      }
   }

   return 0;
}