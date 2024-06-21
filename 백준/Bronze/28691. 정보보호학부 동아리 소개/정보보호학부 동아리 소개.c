#include <stdio.h>

int main(void) { 
   char str;
   scanf("%c", &str);

   if(str == 'M'){printf("MatKor");}
   else if(str == 'W'){printf("WiCys");}
   else if(str == 'C'){printf("CyKor");}
   else if(str == 'A'){printf("AlKor");}
   else{printf("$clear");}

   return 0;
}