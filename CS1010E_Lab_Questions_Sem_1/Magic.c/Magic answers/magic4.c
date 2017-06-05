#include <stdio.h>

int main(void)
{
int n, oddSquare[30][30] = {{0}}, i, j, middle;
int k = 1, x, y;

scanf("%d", &n);

while(n != 0)
{


if(n%2 != 0){

printf("%d is odd\n",n);
middle = (1 + n)/2;
y = middle;
x = 1 ;
oddSquare[1][middle] = 1;
x = 1 - 1;
y = y + 1;
if( x == 0){x = n;}
if( y == n + 1) {y = 1;}

while(oddSquare[x][y] == 0)
{k++;
oddSquare[x][y] = k;
x = x - 1;
y = y + 1;
if( x == 0)
{x = n;}
if( y == n + 1)
{y = 1;}}

for(i = 1; i <= n; i++){
for(j = 1; j <= n; j++){
printf("%4d", oddSquare[i][j]);
}printf("\n");}

//zero the array
for(i = 1; i <= n; i++){
for(j = 1; j <= n; j++){
oddSquare[i][j] = 0;}
k = 1;}
}
else if( (n%2 == 0) && ((n/2)%2)== 0)
{printf("%d is doubly-even\n",n);}
if ((n%2 == 0 ) && ((n/2)%2 != 0) ){printf("%d is singly-even\n",n);}
scanf("%d", &n);
    }

    return 0;
}
