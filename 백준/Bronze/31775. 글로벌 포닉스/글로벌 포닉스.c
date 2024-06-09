#include <stdio.h>

int main(void) { 
   char a[21], b[21], c[21];
   scanf("%s", a);
   scanf("%s", b);
   scanf("%s", c);

   if((a[0] != b[0]) && (a[0] != c[0]) && (b[0] != c[0])){
      if(a[0] == 'l' || a[0] == 'k' || a[0] == 'p'){
         if(b[0] == 'l' || b[0] == 'k' || b[0] == 'p'){
            if(c[0] == 'l' || c[0] == 'k' || c[0] == 'p'){
               printf("GLOBAL");
               return 0;
            }
         }
      }
   }

   printf("PONIX");

   return 0;  
   
}