#include <stdio.h>
#include <string.h>

int main(void) {  
   int a, count, flag;
   scanf("%d", &a);

   char arr[51];
   for(int i = 0; i < a; i++){
      flag = 1;
      count = 0;
      scanf("%s", arr);
      int length = strlen(arr);
      for(int j = 0; j < length; j++){
         if(arr[j] == '(' ){
            count += 1;
         }
         else{
            count -= 1;
         }
         if(count < 0){
            flag = 0;
            break;
         }
      }
      if(count != 0 || !flag){
         printf("NO\n");
      }
      else if(count == 0 && arr[length - 1] == ')'){
         printf("YES\n");
      }
   }

   return 0;
}