#include <stdio.h>

void fillMagic(int oddSquare[][30], int first, int size);
void copy(int grid1[][30], int size, int grid2[][30], int r, int c);
void printMagic( int oddSquare[][30], int size);
void clearGrid(int grid[][30], int size);

int main(void) {
   int n, oddSquare[30][30] = {{0}}, i, j, middle;
   int gridA[30][30] = {{0}}; 
   int gridB[30][30] = {{0}}; 
   int gridC[30][30] = {{0}}; 
   int gridD[30][30] = {{0}}; 
   int k = 1, x, y, first, size;

   scanf("%d", &n);

   while(n != 0) {

      printf("%d is ", n);
      if(n%2 != 0) {

         printf("odd\n");
         fillMagic(oddSquare, 1, n);
         printMagic(oddSquare, n);

       

      } else if( (n%2 == 0) && ((n/2)%2)== 0) {
         printf("doubly-even\n");
      } if ((n%2 == 0 ) && ((n/2)%2 != 0) ) {
         printf("singly-even\n");
         size = n/2;
         first = 1;
         fillMagic(gridA, first, size);
         first = first + size*size;
         fillMagic(gridB, first, size);
         first = first + size*size;
         fillMagic(gridC, first, size);
         first = first + size*size;
         fillMagic(gridD, first, size);  /* print change to fill array*/
         copy(gridA, size, gridB, size, size);
         copy(gridA, size, gridC,    0, size);
         copy(gridA, size, gridD, size,    0);
         printMagic(gridA, n);
         clearGrid(gridA, n);
         clearGrid(gridB, size);
         clearGrid(gridC, size);
         clearGrid(gridD, size);
      }
      scanf("%d", &n);
   }

   return 0;
}


void fillMagic(int oddSquare[][30], int first, int size) {
      int x, y, middle, i, j, k = 1;
      /*this is function to print out a magic box according to size*/
         middle = (1 + size)/2;
         y = middle;
         x =1 ;
         oddSquare[1][middle] = first;
         x = 1 - 1;
         y = y + 1;
         if( x == 0) {
            x = size;
         }

         if( y == size + 1) {
            y = 1;
         }
        
         while( k  <= (size*size) - 1 ) {
         k++;
         first++;
      
        if(oddSquare[x][y] != 0) {
           if(x == size) {
              x = 1;
           }else {
              x = x +1;
           }
          
           if(y == 1) {
              y = size;
           } else {
              y = y -1;
           }
           x = x +1;
           oddSquare[x][y] = first;

        } 

        else {
           oddSquare[x][y] = first;
        }
         x = x - 1;
         y = y + 1;
         if( x == 0) {
            x = size;
         }

         if( y == size + 1) {
            y = 1;
         }
         }

       
            k = 1;          
         
    return;
    }
  

void printMagic( int oddSquare[][30], int size) {
   int i, j;
         for(i = 1; i <= size; i++) {
            for(j = 1; j <= size; j++) {
               printf("%4d", oddSquare[i][j]);
            }
            printf("\n");
         }
         for(i = 1; i <= size; i++) {
            for(j = 1; j <= size; j++) {
                oddSquare[i][j] = 0;
            }
         } 
         return;
}

void copy(int grid1[][30], int size, int grid2[][30], int r, int c) {
   int i, j;      
      for(i = 1; i <= size; i++){
         for(j = 1; j<= size; j++) {
            grid1[i + r][j + c] = grid2[i][j];
         }
      }

return;
}
void clearGrid(int grid[][30], int size) {
   int i, j;
         for(i = 1; i <= size; i++) {
            for(j = 1; j <= size; j++) {
                grid[i][j] = 0;
            }
         } 
         return;
}










