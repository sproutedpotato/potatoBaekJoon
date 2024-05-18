#include <stdio.h>
#include <string.h>

int main(void) {  
   int num;
   scanf("%d", &num);

   int result = 0;

   for (int a = 0; a < num; a++) {
      char letter[101];
      int seen[26] = {0};
      int isGroupWord = 1;

      scanf("%s", letter);

      int length = strlen(letter);
      seen[letter[0] - 'a'] = 1;
      for (int i = 1; i < length; i++) {
         if (i > 0 && letter[i] != letter[i - 1]) {
            if (seen[letter[i] - 'a']) {
               isGroupWord = 0;
               break;
            }
         }
         seen[letter[i] - 'a'] = 1;
      }

      if (isGroupWord) {
         result++;
      }
   }

   printf("%d\n", result);

   return 0;
}