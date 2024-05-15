#include <stdio.h>

int main(void) {
   int N, M;
   scanf("%d", &N);
   int food_arr[N];

   for(int i = 0; i < N; i++){
      scanf("%d", &food_arr[i]);
   }

   scanf("%d", &M);
   int student_arr[M];
   for(int i = 0; i < M; i++){
      scanf("%d", &student_arr[i]);
   }

   int sum = 0;
   for(int i = 0; i < M; i++){
      sum += food_arr[student_arr[i] - 1];
   }

   printf("%d", sum);

   return 0;
}