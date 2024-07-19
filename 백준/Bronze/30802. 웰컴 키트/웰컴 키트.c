#include <stdio.h>

int main(void) { 
   long person;
   long shirt[6], tshirt, pen;
   scanf("%ld", &person);
   scanf("%ld %ld %ld %ld %ld %ld", &shirt[0], &shirt[1], &shirt[2], &shirt[3], &shirt[4], &shirt[5]);
   scanf("%ld %ld", &tshirt, &pen);

   long sum = 0;
   for(int i = 0; i < 6; i++){
      if(shirt[i] % tshirt == 0){
         sum += shirt[i] / tshirt;
      }
      else{
         sum += shirt[i] / tshirt + 1;
      }
   }

   printf("%ld\n", sum);
   printf("%ld %ld", person / pen, person % pen);
   
   return 0;
}