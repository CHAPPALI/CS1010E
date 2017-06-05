#include <stdio.h>
#include <string.h>



int main(void) {
   char maze[30][30]; //the table has 30 rows of stings,And each sting can have up to 30 chars

   int i, j, start, length;

   scanf("%s", maze[0]);
   length = strlen(maze[0]);



   /*start from i=0, length - 1*/

   for(i = 1; i < length ; i++) {
      scanf("%s",maze[i]);
   }

   for(j = 0; j < length; j++) {
      if(maze[j][0] == 's'){
         start = j;
      }
   }

   printf("start = (%d,0)\n", start);

   for(i = 0; i < length; i++) {

      printf("%s\n", maze[i]);
   }


   return 0;
}
