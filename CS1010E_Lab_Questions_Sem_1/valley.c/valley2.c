#include <stdio.h>
#include <stdlib.h>
#define INVALID -1



int main()
{   int currheight;
    int prevheight;

    scanf("%d",&prevheight);
    if (prevheight >= 0){

     scanf("%d",&currheight);

     if (currheight >= 0){


       while(currheight >=0){

         printf("%d,%d\n", prevheight,currheight);

         prevheight = currheight;
         scanf("%d",&currheight);
        }
          }
           }   return 0;

    }


