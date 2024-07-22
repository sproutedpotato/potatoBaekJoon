#include <stdio.h>
#include <string.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   
   int k, index = 0, num[10000];
   
   for(int i = 0; i < a; i++){
      char arr[6];
      scanf("%s", arr);
      if(strcmp(arr, "push") == 0){
         scanf("%d", &k);
         num[index] = k;
         index += 1;
      }
      else{
         if(strcmp(arr, "top") == 0){
            if(index == 0){
                printf("-1\n");
            }
            else {
                printf("%d\n", num[index - 1]);
            }
         }
         else if(strcmp(arr, "pop") == 0){
            if(index == 0){
               printf("-1\n");
            }
            else{
               printf("%d\n", num[index - 1]);
               num[index - 1] = -1;
               index -= 1;
            }
         }
         else if(strcmp(arr, "size") == 0){
            printf("%d\n", index);
         }
         else{
            if(index == 0){
               printf("1\n");
            }
            else{
               printf("0\n");
            }
         }
      }
   }
   
   return 0;
}