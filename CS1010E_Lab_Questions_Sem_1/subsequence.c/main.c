#include <stdio.h>
/*sum4.Sequence restarts if its less than zero*/
int main()
{   int num;
    int sum = 0;
    int max = -9;

    scanf("%d", &num);

       while(num != 0){

         sum = sum + num;


         if (sum > max) {
            max = sum;
         }
          printf("%d,%d\n", num,sum);
         if(sum < 0){
            sum = 0;
         }
         scanf("%d",&num);
        }
        printf("%d\n", max);
        return 0;
    }


