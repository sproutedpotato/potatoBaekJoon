#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
   int *coorA = (int *)a;
   int *coorB = (int *)b;

   if(coorA[1] == coorB[1])   return coorA[0] - coorB[0];
   else   return coorA[1] - coorB[1];
}

int main(void) { 
   int a;
   scanf("%d", &a);

   int coor[a][2];
   for(int i = 0; i < a; i++){
      scanf("%d %d", &coor[i][0], &coor[i][1]);
   }

   qsort(coor, a, sizeof(int) * 2, compare);

   for(int i = 0; i < a; i++){
      printf("%d %d\n", coor[i][0], coor[i][1]);
   }
   
   return 0;
}