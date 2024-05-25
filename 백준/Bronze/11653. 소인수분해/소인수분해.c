#include <stdio.h>

int main(void) {  
   int a, arr[5000000], index = 0, num;
   scanf("%d", &a);

   while(a > 1){
      for (int i = 2; i < a + 1; i++) {
         if (a % i == 0) {
            num = i;
            break;
         }
      }
      a /= num;
      arr[index] = num;

      index += 1;
   }

   for(int i = 0; i < index; i++){
      printf("%d ", arr[i]);
   }

   return 0;
}