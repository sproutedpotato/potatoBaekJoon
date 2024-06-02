#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);
   long coor[a][2];

   for(int i = 0; i < a; i++){
      scanf("%ld %ld", &coor[i][0], &coor[i][1]);
   }

   int axis = 0, one = 0, two = 0, three = 0, four = 0;
   for(int i = 0; i < a; i++){
      if(coor[i][0] == 0 || coor[i][1] == 0){
         axis += 1;
      }
      else if(coor[i][0] > 0 && coor[i][1] > 0){
         one += 1;
      }
      else if(coor[i][0] > 0 && coor[i][1] < 0){
         four += 1;
      }
      else if(coor[i][0] < 0 && coor[i][1] < 0){
         three += 1;
      }
      else{
         two += 1;
      }
   }
   printf("Q1: %d\n", one);
   printf("Q2: %d\n", two);
   printf("Q3: %d\n", three);
   printf("Q4: %d\n", four);
   printf("AXIS: %d\n", axis);

   return 0;
}