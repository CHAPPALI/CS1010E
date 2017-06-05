#include <stdio.h>
#include <stdbool.h>




int main(void)
{


    int prevheight;
    int currheight;



    scanf("%d",&prevheight);
    if (prevheight >= 0){
        scanf("%d", &currheight);
       while(currheight >=0){
            if (currheight > prevheight) {
                printf("%d,%d(UP)\n", prevheight, currheight);
            }


            else {
                if (prevheight > currheight) {
                    printf("%d,%d(DOWN)\n", prevheight, currheight);

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


