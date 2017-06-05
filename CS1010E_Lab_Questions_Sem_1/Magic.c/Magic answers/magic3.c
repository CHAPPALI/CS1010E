#include <stdio.h>
//by Leong Seng
int main(void) {
   int n, oddSquare[30][30] = {{0}}, i, j, middle;


   scanf("%d", &n);

   while(n != 0) {


      if(n%2 != 0) {

         printf("%d is odd\n",n);

         middle = (1 + n)/2;

         oddSquare[1][middle] = 1;
         for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
               printf("%4d", oddSquare[i][j]);
            }
            printf("\n");
         }

         oddSquare[1][middle] = 0;

      } else if( (n%2 == 0) && ((n/2)%2)== 0) {
         printf("%d is doubly-even\n",n);
      } if ((n%2 == 0 ) && ((n/2)%2 != 0) ) {
         printf("%d is singly-even\n",n);
      }
      scanf("%d", &n);
   }

   return 0;
}
