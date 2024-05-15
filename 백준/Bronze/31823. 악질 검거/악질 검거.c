#include <stdio.h>

void sort(int arr[], int length){
   int temp;
   for(int i = 0; i < length - 1; i++){
      for(int j = i + 1; j < length; j++){
         if(arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}

int isdiff(int arr[], int length){
   sort(arr, length);
   int count = 1;
   for(int i = 1; i < length; i++){
      if(arr[i - 1] != arr[i]){
         count += 1;
      }
   }
   return count;
}

int main(void) {
   int member, day;

   scanf("%d %d", &member, &day);

   char activity[member][day + 1];
   char name[member][11];
   for(int i = 0; i < member; i++){
      for(int j = 0; j < day; j++){
         scanf(" %c", &activity[i][j]);
      }
      scanf(" %s", name[i]);
      activity[i][day] = '\0';
      name[i][10] = '\0';
   }

   int unpass[member];
   int pass[member];
   int count, max;
   for(int i = 0; i < member; i++){
      count = 0;
      max = 0;
      for(int j = 0; j < day; j++){
         if(activity[i][j] ==  '.'){
            count += 1;
            if(count > max){
               max = count;
            }
         }
         else{
            count = 0;
         }
      }
      pass[i] = max;
   }

   for(int i = 0; i < member; i++){
      unpass[i] = pass[i];
   }
   int M = isdiff(pass, member);
   
   printf("%d\n", M);
   for(int i = 0; i < member; i++){
      printf("%d %s\n", unpass[i], name[i]);
   }

   return 0;
}