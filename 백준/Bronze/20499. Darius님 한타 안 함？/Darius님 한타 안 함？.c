#include <stdio.h>

int main(void) {  
   int K, D, A;
   char a, b;
   scanf("%d%c%d%c%d", &K, &a, &D, &b, &A);
   if(K + A < D || D == 0){
      printf("hasu");
   }
   else{
      printf("gosu");
   }
   
   return 0;
}