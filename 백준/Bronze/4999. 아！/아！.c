#include <stdio.h>
#include <string.h>

int main(void) {  
   char patient[1001], doctor[1001];

   scanf("%s", patient);
   scanf("%s", doctor);

   if(strlen(patient) < strlen(doctor)){
      printf("no");   
   }
   else{
      printf("go");
   }
   
   return 0;
}