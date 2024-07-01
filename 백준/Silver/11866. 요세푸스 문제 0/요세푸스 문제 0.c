#include <stdio.h>

int main(void) { 
   int length, count, temp, num = 0, index = 0;
   scanf("%d %d", &length, &count);

   int arr[length];
   for(int i = 0; i < length; i++){
      arr[i] = i + 1;
   }

   printf("<");
   temp = length;
   while(1){
      if(temp == 0) break;
      
      if(arr[index] != 0) num += 1;

      if(num == count){
         num = 0;
         temp -= 1;
         if(temp != 0) printf("%d, ", arr[index]);
         else {
            printf("%d>", arr[index]);
            break;
         }
         arr[index] = 0;
      }

      index += 1;
      if(index == length)   index = 0;
   }
   return 0;  

}