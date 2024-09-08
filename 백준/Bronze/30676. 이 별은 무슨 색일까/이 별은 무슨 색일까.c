#include <stdio.h>

int main(void) { 
   int lamda;
   scanf("%d", &lamda);

   if (620 <= lamda && lamda <= 780)   printf("Red");
   else if (590 <= lamda && lamda < 620)   printf("Orange");
   else if (570 <= lamda && lamda < 590)   printf("Yellow");
   else if (495 <= lamda && lamda < 570)   printf("Green");
   else if (450 <= lamda && lamda < 495)   printf("Blue");
   else if (425 <= lamda && lamda < 450)   printf("Indigo");
   else   printf("Violet");
   
   return 0;
}