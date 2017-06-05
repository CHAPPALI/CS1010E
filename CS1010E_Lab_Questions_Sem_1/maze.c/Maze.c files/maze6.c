#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE 31

void searchStart (char maze[][SIZE+1], int *row, int *col, int n);

int main(void) {
   int n, i, j, row, col, temprow, tempcol, dir=2;
   char maze[SIZE][SIZE+1];

   scanf ("%s", maze[0]);
   n = strlen(maze[0]);

   for (i=1; i<n; i++) {
      scanf ("%s", maze[i]);
   }

   searchStart (maze, &row, &col, n);

   printf ("start = (%d,%d)\n", row, col);

   temprow = row;
   tempcol = col;
     
   while (maze[temprow][tempcol] != '@' && maze[temprow][tempcol] != 'e') {
      if (maze[temprow][tempcol] == '.' || maze[temprow][tempcol] == 's') {
         maze[temprow][tempcol] = '1';
      }
      else {
         if (maze[temprow][tempcol] == '1') {
            maze[temprow][tempcol] = '2';
         }
         else {
            if (maze[temprow][tempcol] == '2') {
               maze[temprow][tempcol] = '3';
            }
            else {
               if (maze[temprow][tempcol] == '3') {
                  maze[temprow][tempcol] = '4';
               }
            }
         }
      }
 
   if (dir == 2) {  //facing right
      if (maze[temprow-1][tempcol] == '.' || maze[temprow-1][tempcol] == '1' || maze[temprow-1][tempcol] == '2' || maze[temprow-1][tempcol] == '3' || maze[temprow-1][tempcol] == 'e') { //check left
         temprow = temprow - 1;
         dir = 1;
      }
      else {
         if (maze[temprow][tempcol+1] == '.' || maze[temprow][tempcol+1] == '1' || maze[temprow][tempcol+1] == '2' || maze[temprow][tempcol+1] == 'e' || maze[temprow][tempcol+1] == '3') { //check forward
               tempcol = tempcol + 1;
         }
         else {
            if (maze[temprow+1][tempcol] == '.' || maze[temprow+1][tempcol] == '1' || maze[temprow+1][tempcol] == '2' || maze[temprow+1][tempcol] == 'e' || maze[temprow+1][tempcol] == '3') { //check right
               temprow = temprow + 1;
               dir = 3;
            }
            else { //turn back
               tempcol = tempcol - 1;
               dir = 4;
            }
         }
      }
   }


   else {
      if (dir == 1) {  //facing up
         if (maze[temprow][tempcol-1] == '.' || maze[temprow][tempcol-1] == '1' || maze[temprow][tempcol-1] == '2' || maze[temprow][tempcol-1] == 'e' || maze[temprow][tempcol-1] == '3') { //check left
            tempcol = tempcol - 1;
            dir = 4;
         }
         else {
            if (maze[temprow-1][tempcol] == '.' || maze[temprow-1][tempcol] == '1' || maze[temprow-1][tempcol] == '2' || maze[temprow-1][tempcol] == 'e' || maze[temprow-1][tempcol] == '3') { //check forward
            temprow = temprow - 1;
            }
            else {
               if (maze[temprow][tempcol+1] == '.' || maze[temprow][tempcol+1] == '1' || maze[temprow][tempcol+1] == '2' || maze[temprow][tempcol+1] == 'e' || maze[temprow][tempcol+1] == '3') { //check right
               tempcol = tempcol + 1;
               dir = 2;
               }
               else { // turn back
                  temprow = temprow + 1;
                  dir = 3;
               }
            }
         }
      }

      else {
         if (dir == 4) { //facing left
            if (maze[temprow+1][tempcol] == '.' || maze[temprow+1][tempcol] == '1' || maze[temprow+1][tempcol] == '2' || maze[temprow+1][tempcol] == 'e' || maze[temprow+1][tempcol] == '3') { //check left
               temprow = temprow + 1;
               dir = 3;
            }
            else {
               if (maze[temprow][tempcol-1] == '.' || maze[temprow][tempcol-1] == '1' || maze[temprow][tempcol-1] == '2' || maze[temprow][tempcol-1] == 'e' || maze[temprow][tempcol-1] == '3') { //check forward
               tempcol = tempcol - 1;
               }
               else {      
                  if (maze[temprow-1][tempcol] == '.' || maze[temprow-1][tempcol] == '1' || maze[temprow-1][tempcol] == '2' || maze[temprow-1][tempcol] == 'e' || maze[temprow-1][tempcol] == '3') { //check right
                  temprow = temprow - 1;
                  dir = 1;
                  }
                  else { //turn back
                     tempcol = tempcol + 1;
                     dir = 2;
                  }
               }
            }
         }

         else {  //facing down
            if (maze[temprow][tempcol+1] == '.' || maze[temprow][tempcol+1] == '1' || maze[temprow][tempcol+1] == '2' || maze[temprow][tempcol+1] == 'e' || maze[temprow][tempcol+1] == '3') { //check left
               tempcol = tempcol + 1;
               dir = 2;
            }
            else {
               if (maze[temprow+1][tempcol] == '.' || maze[temprow+1][tempcol] == '1' || maze[temprow+1][tempcol] == '2' || maze[temprow+1][tempcol] == 'e' || maze[temprow+1][tempcol] == '3') { //check forward
               temprow = temprow + 1;
               }
               else {
                  if (maze[temprow][tempcol-1] == '.' || maze[temprow][tempcol-1] == '1' || maze[temprow][tempcol-1] == '2' || maze[temprow][tempcol-1] == 'e' || maze[temprow][tempcol-1] == '3') { //check right
                  tempcol = tempcol - 1;
                  dir = 4;
                  }
                  else {
                     temprow = temprow - 1;
                     dir = 1;
                  }
               }
            }
         }
      }
   }
  
   if (maze[temprow][tempcol] == 'e') {
      maze[temprow][tempcol] = '1';
      break;
   }
        
   }


   for (i=0; i<n; i++) {
      printf ("%s\n", maze[i]);
   }

  
   return 0;
}

void searchStart (char maze[][SIZE+1], int *row, int *col, int n) {
   int i, j;

   for (i=0; i<n; i++) {
      for (j=0; j<n; j++) {
         if (maze[i][j] == 's') {
            *row = i;
            *col = j;
            return;
         }
      }
   }
}
      

   
