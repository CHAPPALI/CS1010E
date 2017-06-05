#include <stdio.h>
#include <stdbool.h>
/*Outputs the maximum valley in brackets*/



int main(void)
{


    int prevheight;
    int currheight;
    int max;
    bool descent;
    descent = false;
    max = -1;

    scanf("%d",&prevheight);

    if (prevheight >= 0){
        scanf("%d", &currheight);

       while(currheight >=0){
            if (currheight > prevheight) {
                printf("%d,%d(UP)\n", prevheight, currheight);
            }
            if (descent == true && currheight > prevheight){
                    if (max < prevheight) {
                        max = prevheight;
                        printf("VALLEY,%d(%d)\n", prevheight, max);
                    }
                    else {
                        if (max > prevheight) {
                            printf("VALLEY,%d(%d)\n", prevheight, max);
                        }
                    }
                descent = false;
            }
            else {
                if (prevheight > currheight) {
                    printf("%d,%d(DOWN)\n", prevheight, currheight);
                    descent = true;
                }
                if (prevheight == currheight) {
                    printf("%d,%d\n", prevheight, currheight);
                }
}
            prevheight = currheight;


         scanf("%d",&currheight);
       }
   }

           return 0;

    }


