#include <stdio.h>
#include <string.h>

int main(void) {  
   float score;
   char dept[51], grade[3];
   
   float total = 0;
   float sum_score = 0;
   for(int i = 0; i < 20; i++) {
      scanf("%s %f %s", dept, &score, grade);
      if(strcmp(grade, "A+") == 0){
         total += score * 4.5;
      }
      else if(strcmp(grade, "A0") == 0){
         total += score * 4.0;
      }
      else if(strcmp(grade, "B+") == 0){
         total += score * 3.5;
      }
      else if(strcmp(grade, "B0") == 0){
         total += score * 3.0;
      }
      else if(strcmp(grade, "C+") == 0){
         total += score * 2.5;
      }
      else if(strcmp(grade, "C0") == 0){
         total += score * 2.0;
      }
      else if(strcmp(grade, "D+") == 0){
         total += score * 1.5;
      }
      else if(strcmp(grade, "D0") == 0){
         total += score * 1.0;
      }
      else if(strcmp(grade, "F") == 0){
         total += score * 0.0;
      }
      if(strcmp(grade, "P") != 0){
         sum_score += score;
      }
   }

   printf("%f", total / sum_score);
   
   return 0;
}