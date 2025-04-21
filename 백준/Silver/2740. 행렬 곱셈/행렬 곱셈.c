#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  int arr1[a][b];
  for(int i = 0; i < a; i++) {
    for(int j = 0; j < b; j++) {
      scanf("%d", &arr1[i][j]);
    }
  }

  int c, d;
  scanf("%d %d", &c, &d);
  int arr2[c][d];
  for(int i = 0; i < c; i++){
    for(int j = 0; j < d; j++){
      scanf("%d", &arr2[i][j]);
    }
  }

  int result[a][d];

  for(int i = 0; i < a; i++){
    for(int j = 0; j < d; j++){
      result[i][j] = 0;
      for (int k = 0; k < b; k++)
        {
            result[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
  }

  for(int i = 0; i < a; i++){
    for(int j = 0; j < d; j++){
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}