#include <stdio.h>
#include <string.h>

//convert to maze2

int main(void){
char array[30][30] ={{'\0'}};

int row,col;
int i,start,j;

scanf("%s",array[0]);
i= strlen(array[0]);

for (j = 1; j < i; j++) {
    scanf("%s", array[j]);
}
for (j = 0; j < i; j++) {
    printf("%s", array[j]);
    printf("\n");
}

for (j = 0; j < i; j++) {
    for (k = 0; k < i; k++) {
        if (array[j][k] == 's') {
            x = j;
            y = k;
            break;
        }
    }
}
printf("start = (%d,%d)\n", x, y);










return 0;
   }
