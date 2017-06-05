#include <stdio.h>
#include <stdbool.h>
/*valley4.c outputs a (VALLEY)descent*/




int main(void)
{


    int prevheight;
    int currheight;
    bool descent;
    descent = false;

    scanf("%d",&prevheight);

    if (prevheight >= 0){
        scanf("%d", &currheight);

       while(currheight >=0){
            if (currheight > prevheight) {
                printf("%d,%d(UP)\n", prevheight, currheight);
            }
            if (descent == true && currheight > prevheight){
                printf("VALLEY,%d\n", prevheight);
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


