#include <stdio.h>
#include <string.h>

int main(void) { 
   char arr[3];
   scanf("%s", arr);

   if(strcmp(arr, "A+") == 0) printf("4.3");
   else if(strcmp(arr, "A0") == 0) printf("4.0");
   else if(strcmp(arr, "A-") == 0) printf("3.7");
   else if(strcmp(arr, "B+") == 0) printf("3.3");
   else if(strcmp(arr, "B0") == 0) printf("3.0");
   else if(strcmp(arr, "B-") == 0) printf("2.7");
   else if(strcmp(arr, "C+") == 0) printf("2.3");
   else if(strcmp(arr, "C0") == 0) printf("2.0");
   else if(strcmp(arr, "C-") == 0) printf("1.7");
   else if(strcmp(arr, "D+") == 0) printf("1.3");
   else if(strcmp(arr, "D0") == 0) printf("1.0");
   else if(strcmp(arr, "D-") == 0) printf("0.7");
   else printf("0.0");
   
   return 0;
}