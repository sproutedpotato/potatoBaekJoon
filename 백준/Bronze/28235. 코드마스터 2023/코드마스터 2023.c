#include <stdio.h>
#include <string.h>

int main(void) { 
   char a[10];
   scanf("%s", a);

   if(!strcmp(a, "SONGDO")) printf("HIGHSCHOOL");
   else if(!strcmp(a, "CODE")) printf("MASTER");
   else if(!strcmp(a, "2023")) printf("0611");
   else printf("CONTEST");

   return 0;
}