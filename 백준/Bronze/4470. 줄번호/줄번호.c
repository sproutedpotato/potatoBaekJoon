#include <stdio.h>
#include <string.h>

int main(void) { 
   int a;
   scanf("%d", &a);
   getchar();

   char letter[52];
   for(int i = 0; i < a; i++){
      fgets(letter, sizeof(letter), stdin);
      printf("%d. %s", i + 1, letter);
   }

   return 0;
}