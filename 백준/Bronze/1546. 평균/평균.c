#include <stdio.h>

double getnewAver(double a, double b){
   double newAver = (a / b) * 100;
   return newAver;
}

void sort(double arr[], int length){
   for(int i = 0; i < length - 1; i++){
      for(int j = i + 1; j < length; j++)
         if(arr[i] > arr[j]){
            double temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
   }
}

int main(void) {
   int a;
   scanf("%d", &a);

   double arr[a];

   for(int i = 0; i < a; i++){
      scanf("%lf", &arr[i]);
   }
   
   sort(arr, a);
   
   double sum = 0;
   for(int i = 0; i < a; i++){
      double newAver = getnewAver(arr[i], arr[a - 1]);
      arr[i] = newAver;
      sum += arr[i];
   }

   printf("%lf", sum / a);
  
   return 0;
}