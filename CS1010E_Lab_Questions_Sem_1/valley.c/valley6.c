#include <stdio.h>
#include <stdbool.h>
/* outputs max valley in brackets */



int main(void)
{


    int prevheight;
    int currheight;
    int max;
    bool descent;
    descent = false;
    max = -999;

    scanf("%d",&prevheight);

    if (prevheight >= 0){
        scanf("%d", &currheight);

       while(currheight >=0){
            if (currheight > prevheight) {

            }
            if (descent == true && currheight > prevheight){
                    if (max < prevheight) {
                        max = prevheight;

                    }
                    else {
                        if (max > prevheight) {

                        }
                    }
                descent = false;
            }
            else {
                if (prevheight > currheight) {

                    descent = true;
                }
                if (prevheight == currheight) {

                }
}
            prevheight = currheight;


         scanf("%d",&currheight);
       }
   }
   if (max < 0) {
    printf("NONE\n");
   }
   else {
    printf("%d\n", max);
   }

           return 0;

    }


