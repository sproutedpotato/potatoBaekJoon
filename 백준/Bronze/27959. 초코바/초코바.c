#include <stdio.h>

int main(void) { 
   int coin, choco;
   scanf("%d %d", &coin, &choco);

   coin *= 100;

   if(coin >= choco){
      printf("Yes");
   }
   else{
      printf("No");
   }
   
   return 0;
}