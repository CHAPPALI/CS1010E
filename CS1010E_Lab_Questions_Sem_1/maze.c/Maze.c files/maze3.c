#include <stdio.h>
#include <string.h>

char *search(char *str, char c);


int main(void) {
   char maze[30][30];
   
   int i, j, start, startY =1, length;

   scanf("%s", maze[0]);
   length = strlen(maze[0]);



   /*start from i=0, length - 1*/

   for(i = 1; i < length ; i++) {
      scanf("%s",maze[i]);
   }

   for(j = 0; j < length; j++) {
      if(maze[j][0] == 's'){
         start = j;
         maze[j][0] = '1';
      }
   }
   
   while( maze[start][startY] == '.'|| maze[start][startY] =='e' ) {
      maze[start][startY] = '1';
      startY++;
   }

   printf("start = (%d,0)\n", start);
   
   for(i = 0; i < length; i ++) {      
      printf("%s\n", maze[i]);
   }


   return 0;
}

char *search(char *str, char c) {
   while( (*str != '\0') && (*str != c) ){
      str++;
   }
   return str;
}


