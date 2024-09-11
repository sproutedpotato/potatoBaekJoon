#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) { 
   char a[8], b[8], c[8], d[8];
   scanf("%s %s %s %s", a, b, c, d);

   char AtoB[16], CtoD[16];

   strcpy(AtoB, a);
   strcat(AtoB, b);

   strcpy(CtoD, c);
   strcat(CtoD, d);

   long long sum = atoll(AtoB) + atoll(CtoD);

   printf("%lld", sum);
   
   return 0;
}