#include <stdio.h>
#include <string.h>

int main(void) { 
   char str[5];
   scanf("%s", str);

   if(strcmp(str, "NLCS") == 0) printf("North London Collegiate School");
   else if(strcmp(str, "BHA") == 0) printf("Branksome Hall Asia");
   else if(strcmp(str, "KIS") == 0) printf("Korea International School");
   else printf("St. Johnsbury Academy");
   
   return 0;
}