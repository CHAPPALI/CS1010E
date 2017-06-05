#include <stdio.h>
#include <string.h>

char *search(char *str, char c);


int main(void) {
   char maze[30][30];
   
   int i, j, start, startX, startY =1, length, direction = 2;

   scanf("%s", maze[0]);
   length = strlen(maze[0]);



   /*start from i=0, length - 1*/

   for(i = 1; i < length ; i++) {
      scanf("%s",maze[i]);
   }

   for(j = 0; j < length; j++) {
      if(maze[j][0] == 's'){
         start = j;
         startX = j;
         maze[j][0] = '1';
      }
   }
   
   while( maze[start][startY] == '.'|| maze[start][startY] =='e' ) {
      maze[start][startY] = '1';
      if(direction == 2) {
         if(maze[start - 1][startY] == '.' || maze[start - 1][startY] == 'e') {
            start--;
            direction = 1;
            maze[start][startY] ='1';
         } else if(maze[start][startY+1] == '.' || maze[start][startY+1] == 'e') {
            startY++;
         }
      }
      if(direction == 1) {
         if(maze[start][startY-1] == '.' || maze[start][startY-1] == 'e') {
            startY--;
            direction = 4;
            maze[start][startY] ='1';
         }  else if(maze[start-1][startY] == '.' || maze[start-1][startY] == 'e') {
            start--;
         }
      }
      if(direction == 4) {
         if(maze[start + 1][startY] == '.' || maze[start + 1][startY] == 'e') {
            start++;
            direction = 3;
            maze[start][startY] ='1';
         } else if(maze[start][startY-1] == '.' || maze[start][startY-1] == 'e') {
            startY--;
         }
      }

      if(direction == 3) {
         if(maze[start][startY+1] == '.' || maze[start][startY+1] == 'e') {
            startY++;
            direction = 2;
            maze[start][startY] ='1';
         }  else if(maze[start+1][startY] == '.' || maze[start+1][startY] == 'e') {
            start++;
         }
      }
}



   printf("start = (%d,0)\n", startX);
   
   for(i = 0; i < length; i ++) {      
      printf("%s\n", maze[i]);
   }


   return 0;
}



