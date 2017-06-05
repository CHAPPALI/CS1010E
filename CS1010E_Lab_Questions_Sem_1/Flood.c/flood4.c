#include <stdio.h>

#define ROW 12
#define COLUMN 12

void init(int map[][COLUMN], int r, int c);
void scanMap(int map[][COLUMN], int r, int c);
void floodcheck(int map[][COLUMN], int r, int c, int n, int *isFlood);
void printMap(int map[][COLUMN], int r, int c);

int main(void) {
   int map[ROW][COLUMN];
   int n;
   int isFlood=1;

   scanf("%d", &n);

   init(map, ROW, COLUMN);

   scanMap(map, ROW, COLUMN);

   while(isFlood == 1) {

isFlood = 0;

   floodcheck(map, ROW, COLUMN, n, &isFlood);
   
   }

   printMap(map, ROW, COLUMN);

   return 0;
}

void init(int map[][COLUMN], int r, int c) {
   int i, j;

   for(j=0; j<c; j++) {
      map[0][j] = -1;
      map[r-1][j] = -1;
   }

   for(i=1; i<r; i++) {
      map[i][0] = -1;
      map[i][c-1] = -1;
   }

   return;
}

void scanMap(int map[][COLUMN], int r, int c) {
   int i, j;

   for (i=1; i<r-1; i++) {
      for (j=1; j<c-1; j++) {
         scanf("%d", &map[i][j]);
      }
   }

   return;
}

void floodcheck(int map[][COLUMN], int r, int c, int n, int *isFlood) {
   int i, j;

   for(i=1; i<r-1; i++) {
      for (j=1; j<c-1; j++) {
         if ((map[i][j] <= n) && (((map[i-1][j] == -1) || (map[i][j-1] == -1)) ||  ((map[i+1][j] == -1) || (map[i][j+1] == -1)))) {
            map[i][j] = -1;
            *isFlood = 1;
         }
      }
   }
   return;
}

void printMap(int map[][COLUMN], int r, int c){
   int i, j;

   for(i=1; i<r-1; i++) {
      for(j=1; j<c-1; j++) {
         if(map[i][j] > -1) {
            printf("%d", map[i][j]);
         }
         else{
            printf("*");
         }
      }
      printf("\n");
   }
   return;
}


