#include <stdio.h>

int main(void) {
   int n;

   scanf("%d", &n);

   while(n != 0) {



      printf("%d is ", n);
      if(n%2 != 0) {
         printf("odd\n");
      } else if( (n%2 == 0) && ((n/2)%2)== 0) {
         printf("doubly-even\n");
      } if ((n%2 == 0 ) && ((n/2)%2 != 0) ) {
         printf("singly-even\n");
      }
      scanf("%d", &n);
   }

   return 0;
}
