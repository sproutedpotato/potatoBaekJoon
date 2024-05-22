#include <stdio.h>

int main(void) {  
   int num;
   scanf("%d", &num);

   int dot = 2;

   for(int i = 0; i < num; i++){
      dot = dot * 2 - 1;
   }
   
   printf("%d", dot * dot);
   
   return 0;
}