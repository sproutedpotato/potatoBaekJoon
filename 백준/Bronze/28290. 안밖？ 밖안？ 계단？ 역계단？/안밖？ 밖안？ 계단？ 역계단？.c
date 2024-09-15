#include <stdio.h>
#include <string.h>

int main(void) { 
   char arr[9];
    
   scanf("%s", arr);

   if(strcmp(arr, "fdsajkl;") == 0 || strcmp(arr, "jkl;fdsa") == 0) printf("in-out");
   else if(strcmp(arr, "asdf;lkj") == 0 || strcmp(arr, ";lkjasdf") == 0) printf("out-in");
   else if(strcmp(arr, "asdfjkl;") == 0) printf("stairs");
   else if(strcmp(arr, ";lkjfdsa") == 0) printf("reverse");
   else printf("molu");

   return 0;
}