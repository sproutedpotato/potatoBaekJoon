#include <stdio.h>

int main(void) {  
   int num, money;
   scanf("%d", &num);

   for(int i = 0; i < num; i++){
      int quar = 0, dime = 0, nick = 0, penn = 0;
      scanf("%d", &money);

      while(money > 0){
         if (money >= 25){
            money -= 25;
            quar += 1;
         }
         else if(money >= 10 && money < 25){
            money -= 10;
            dime += 1;
         }
         else if(money >= 5 && money < 10){
            money -= 5;
            nick += 1;
         }
         else{
            money -= 1;
            penn += 1;
         }
      }
      printf("%d %d %d %d\n", quar, dime, nick, penn);
   }
   
   return 0;
}