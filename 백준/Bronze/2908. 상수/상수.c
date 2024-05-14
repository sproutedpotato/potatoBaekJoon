#include <stdio.h>

void change(char str[]){
   char temp = str[2];
   str[2] = str[0];
   str[0] = temp;
}

int compare(int a, int b){
   int big = 0;
   if(a > b){
      big = a;
   }
   else{
      big = b;
   }
   return big;
}

int main(void) {   
   char str1[4], str2[4];
   scanf("%s %s", str1, str2);

   change(str1);
   change(str2);

   int num1 = ((int)str1[0] - (int)'0') * 100 + ((int)str1[1] - (int)'0') * 10 + ((int)str1[2] - (int)'0');
   int num2 = ((int)str2[0] - (int)'0') * 100 + ((int)str2[1] - (int)'0') * 10 + ((int)str2[2] - (int)'0');

   int result = compare(num1, num2);

   printf("%d", result);
   
   return 0;
}