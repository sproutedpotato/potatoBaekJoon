#include <stdio.h>
#include <string.h>

int main(void) { 
   int a, count;
   char num1[101], num2[101]; 
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
      count = 0;
      scanf("%s", num1);
      scanf("%s", num2);

      for(int j = 0; j < strlen(num1); j++){
         if(num1[j] != num2[j]){
            count++;
         }
      }
      printf("Hamming distance is %d.\n", count);
   }
   
   return 0;
}