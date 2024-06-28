#include <stdio.h>

int main(void) { 
   int a;
   scanf("%d", &a);

   int min_index = 0, max_index = 0;

   char name[a][16];
   int day[a], month[a], year[a];

   for(int i = 0; i < a; i++){
      scanf("%s %d %d %d", name[i], &day[i], &month[i], &year[i]);
   }

   for(int i = 1; i < a; i++){
      if(year[i] < year[min_index]){
         min_index = i;
      }
      else if(year[i] == year[min_index]){
         if(month[i] < month[min_index]){
            min_index = i;
         }
         else if(month[i] == month[min_index]){
            if(day[i] < day[min_index]){
               min_index = i;
            }
         }
      }

      if(year[i] > year[max_index]){
         max_index = i;
      }
      else if(year[i] == year[max_index]){
         if(month[i] > month[max_index]){
            max_index = i;
         }
         else if(month[i] == month[max_index]){
            if(day[i] > day[max_index]){
               max_index = i;
            }
         }
      }
   }

   printf("%s\n%s", name[max_index], name[min_index]);

   return 0;
}