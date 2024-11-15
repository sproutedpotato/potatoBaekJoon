#include <stdio.h>
#include <string.h>

int main(void) { 
   char str[51];
   scanf("%s", str);

   int a[26] = {0}, flag = 1, count = 0;
   for(int i = 0; i < strlen(str); i++){
      a[str[i] - 'A'] += 1;
   }
   if(strlen(str) % 2 == 0){
      for(int i = 0; i < 26; i++){
         if(a[i] % 2 != 0){
            flag = 0;
            break;
         }
      }
      if(flag){
         for(int i = 0; i < 26; i++){
            if(a[i] > 0){
               int temp = a[i] / 2;
               while(a[i] > temp){
                  a[i] -= 1;
                  printf("%c", i + 'A');
               }
            }
         }

         for(int i = 25; i >= 0; i--){
            if(a[i] > 0){
               while(a[i] > 0){
                  a[i] -= 1;
                  printf("%c", i + 'A');
               }
            }
         }
      }
   }
   else{
      char c;
      for(int i = 0; i < 26; i++){
         if(a[i] % 2 != 0){
            count += 1;
            c = i + 'A';
            a[i] -= 1;
            if(count > 1){
               flag = 0;
               break;
            }
         }
      }
      
      if(flag){
         for(int i = 0; i < 26; i++){
            if(a[i] > 0){
               int temp = a[i] / 2;
               while(a[i] > temp){
                  a[i] -= 1;
                  printf("%c", i + 'A');
               }
            }
         }

         printf("%c", c);

         for(int i = 25; i >= 0; i--){
            if(a[i] > 0){
               while(a[i] > 0){
                  a[i] -= 1;
                  printf("%c", i + 'A');
               }
            }
         }
      }
   }
   
   if(!flag)   printf("I'm Sorry Hansoo\n");
   
   return 0;
}