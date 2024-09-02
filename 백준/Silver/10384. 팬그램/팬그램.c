#include <stdio.h>
#include <string.h>

int getMin(int arr[]){
   int min = 4;
   for(int i = 0; i < 26; i++){
      if(arr[i] < min)   min = arr[i];
   }

   return min;
}

int main(void) { 
   int a, count;
   scanf("%d", &a);

   getchar();

   char arr[1002];
   for(int i = 0; i < a; i++){
      int result[26] = {0};
      count = 0;
      fgets(arr, 1002, stdin);
      for(int j = 0; j < strlen(arr); j++){
         if((arr[j] >= 'a' && arr[j] <= 'z')){
            result[arr[j] - 'a']++;
         }
         else if((arr[j] >= 'A' && arr[j] <= 'Z')){
            result[arr[j] - 'A']++;
         }
      }

      int min = getMin(result);
      if(min == 0)   printf("Case %d: Not a pangram\n", i + 1);
      else if(min == 1)   printf("Case %d: Pangram!\n", i + 1);
      else if(min == 2)   printf("Case %d: Double pangram!!\n", i + 1);
      else   printf("Case %d: Triple pangram!!!\n", i + 1);
   }

   return 0;
}