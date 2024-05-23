#include <stdio.h>

int main(void) {  
   int first, second, chicken;
   scanf("%d %d", &first, &second);
   scanf("%d", &chicken);

   if(chicken * 2 > first + second) {
      printf("%d", first + second);
   }
   else{
      printf("%d", first + second - chicken * 2);
   } 
   
   return 0;
}