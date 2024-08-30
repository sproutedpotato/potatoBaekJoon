#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
   return (*(int*) b - *(int*) a);
}

int main(void) { 
   int a;
   scanf("%d", &a);

   int tree[a];
   for(int i = 0; i < a; i++){
      scanf("%d", &tree[i]);
   }

   qsort(tree, a, sizeof(int), compare);

   int max = -1, temp;
   for(int j = 0; j < a; j++){
      temp = tree[j] + 1 + j;
      if(temp > max){
         max = temp;
      }
   }

   printf("%d", max + 1);

   return 0;
}