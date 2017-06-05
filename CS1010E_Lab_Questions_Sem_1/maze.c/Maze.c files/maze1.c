#include <stdio.h>
#include <string.h>

#define MAX 31

void read(char maze[][MAX+1], int *size);
void print(char maze[][MAX+1], int size);

int main(void) {   
   char maze[MAX][MAX+1];
   int size;

   read(maze, &size);
   print(maze, size);

   return 0;
}

void read(char maze[][MAX+1], int *size) {
   int i = 0;

   scanf("%s", maze[i]);
   *size = (int)strlen(maze[i]);
   for (i = 1; i < *size; i++) {
      scanf("%s", maze[i]);
   }
   return;
}

void print(char maze[][MAX+1], int size) {
   int i;

   for (i = 0; i < size; i++) {
      printf("%s\n", maze[i]);
   }
   return;
}
