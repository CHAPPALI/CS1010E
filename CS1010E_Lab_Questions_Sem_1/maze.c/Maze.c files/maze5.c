#include <stdio.h>
#include <string.h>

typedef struct{
   int x, y;
} Point;

void firstStep(char maze[][31], int n, Point start);
Point determineStarting(char maze[][31], int n, Point start);
int main(void) {
   char maze[31][31];
   int i, j, n;
   Point start;

   scanf("%s",maze[0]);
   n = strlen(maze[0]);

   for(i = 1; i < n; i++){
      scanf("%s",maze[i]);
   }
   
   start = determineStarting(maze,n,start);
    
   printf("start = (%d,%d)\n",start.y,start.x);
   
   firstStep(maze,n,start);

   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         printf("%c",maze[i][j]);
      }
      printf("\n");
   }

   return 0;
}

Point determineStarting(char maze[][31], int n, Point start){
   int i,j;
   Point m;

   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         if(maze[i][j] == 's'){
            m.x = j;
            m.y = i;
         }
      }
   }
   return m;
}

void firstStep(char maze[][31], int n, Point start){
   int i, j,facing;
   /* up = 1, left = 2, right = 3, down = 4 */
   
   i = start.y;
   j = start.x;
   
   maze[i][j] = '1';
   facing = 3;

   while(maze[i + 1][j] == '.' ||maze[i+1][j] == 'e'|| maze[i - 1][j] == '.' ||maze[i-1][j] == 'e'|| maze[i][j+1] == '.'||maze[i][j+1] == 'e'||maze[i][j-1] == '.'||maze[i][j-1] == 'e'){
      if(facing == 3){

      if(maze[i-1][j] == '.' || maze[i-1][j] == 'e'){
         maze[i-1][j] = '1';
         i = i - 1;
         facing = 1;
      }else if(maze[i][j+1] == '.' || maze[i][j+1] == 'e'){
         maze[i][j+1] = '1';
         j = j + 1;
      }else if(maze[i+1][j] == '.' || maze[i+1][j] == 'e'){
         maze[i+1][j] = '1';
         i = i + 1;
         facing = 4;
      }
   }else if(facing == 1){

      if(maze[i][j-1] == '.' || maze[i][j-1] == 'e'){
         maze[i][j-1] = '1';
         j = j - 1;
         facing = 2;
      }else if(maze[i-1][j] == '.' || maze[i-1][j] == 'e'){
         maze[i-1][j] = '1';
         i = i - 1;
      }else if(maze[i][j+1] == '.' || maze[i][j+1] == 'e'){
         maze[i][j+1] = '1';
         j = j + 1;
         facing = 3;
      }
   }else if(facing == 2){

      if(maze[i+1][j] == '.' || maze[i+1][j] == 'e'){
         maze[i+1][j] = '1';
         i = i + 1;
         facing = 3;
      }else if(maze[i][j-1] == '.' || maze[i][j-1] == 'e'){
         maze[i][j-1] = '1';
         j = j - 1;
      }else if(maze[i-1][j] == '.' || maze[i-1][j] == 'e'){
         maze[i-1][j] = '1';
         i = i - 1;
         facing = 1;
      }
   }else if (facing == 4){
      if(maze[i][j+1] == '.' || maze[i][j+1] == 'e'){
         maze[i][j+1] = '1';
         j = j + 1;
         facing = 3;
      }else if(maze[i+1][j] == '.' || maze[i+1][j] == 'e'){
         maze[i+1][j] = '1';
         i = i + 1;
      }else if(maze[i][j-1] == '.' || maze[i][j-1] == 'e'){
         maze[i][j-1] = '1';
         j = j - 1;
         facing = 2;
      }
   }
   }

   return;
}
