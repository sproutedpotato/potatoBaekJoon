#include <stdio.h>

int main(void) { 
   int a, b, flag = 0;
   scanf("%d %d", &a, &b);

   int top, left, right, bottom;
   scanf("%d %d %d %d", &top, &left, &right, &bottom);

   char arr[a][b + 1];
   for(int i = 0; i < a; i++){
      scanf("%s", arr[i]);
   }

   for(int i = 0; i < top; i++){
      for(int j = 0; j < left + right + b; j++){
         if(!flag){
            printf("#");
            flag = 1;
         }
         else{
            printf(".");
            flag = 0;
         }
      }
      printf("\n");
      if((left + right + b) % 2 == 0){
         flag = !flag;
      }
   }
   
   for(int i = 0; i < a; i++){
      for(int j = 0; j < left; j++){
         if(!flag){
            printf("#");
            flag = 1;
         }
         else{
            printf(".");
            flag = 0;
         }
      }
      printf("%s", arr[i]);
      if(b % 2 != 0){
         flag = !flag;
      }
      
      for(int k = 0; k < right; k++){
         if(!flag){
            printf("#");
            flag = 1;
         }
         else{
            printf(".");
            flag = 0;
         }
      }
      printf("\n");
      if((left + right + b) % 2 == 0){
         flag = !flag;
      }
   }

   for(int i = 0; i < bottom; i++){
      for(int j = 0; j < left + right + b; j++){
         if(!flag){
            printf("#");
            flag = 1;
         }
         else{
            printf(".");
            flag = 0;
         }
      }
      printf("\n");
      if((left + right + b) % 2 == 0){
         flag = !flag;
      }
   }
   
   return 0;
}