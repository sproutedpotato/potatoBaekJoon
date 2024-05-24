#include <stdio.h>
#include <string.h>

int main(void) {  
   int age, weight;
   char name[11];

   while(1){
      scanf("%s %d %d", name, &age, &weight);
      if (strcmp(name, "#") == 0 && age == 0 && weight == 0){
         break;
      }

      if (age < 18 && weight < 80){
         printf("%s Junior\n", name);
      }
      else{
         printf("%s Senior\n", name);
      }
   }

   
   return 0;
}