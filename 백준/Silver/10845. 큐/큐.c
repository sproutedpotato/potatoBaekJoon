#include <stdio.h>
#include <string.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   int k, front = 0, back = 0, num[10000];
   
   for(int i = 0; i < a; i++){
      char arr[6];
      scanf("%s", arr);
      if(strcmp(arr, "push") == 0){
         scanf("%d", &k);
         num[back] = k;
         back += 1;
      }
      else{
         if(strcmp(arr, "front") == 0){
            if(back == front){
                printf("-1\n");
            }
            else {
                printf("%d\n", num[front]);
            }
         }
         else if(strcmp(arr, "back") == 0){
            if(back == front){
               printf("-1\n");
            }
            else {
                  printf("%d\n", num[back - 1]);
            }
         }
         else if(strcmp(arr, "pop") == 0){
            if(back == front){
               printf("-1\n");
            }
            else{
               printf("%d\n", num[front]);
               front += 1;
            }
         }
         else if(strcmp(arr, "size") == 0){
            printf("%d\n", back - front);
         }
         else{
            if(back == front){
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