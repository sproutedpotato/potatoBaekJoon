#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
   const char* str1 = (const char*)a;
   const char* str2 = (const char*)b;

   int len1 = strlen(str1);
   int len2 = strlen(str2);

   if (len1 != len2) {
      return len1 - len2;
   }
   else{
      return strcmp(str1, str2);
   }
}

int main(void) { 
   int a;
   scanf("%d", &a);
   char arr[a][51];

   for(int i = 0; i < a; i++){
      scanf("%s", arr[i]);
   }

   qsort(arr, a, sizeof(arr[0]), compare);

   printf("%s\n", arr[0]);
   for(int i = 1; i < a; i++){
      if(strcmp(arr[i - 1], arr[i]) != 0)
         printf("%s\n", arr[i]);
   }
   
   return 0;
}