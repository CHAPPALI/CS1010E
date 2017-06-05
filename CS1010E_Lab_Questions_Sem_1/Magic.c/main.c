#include <stdio.h>


int main(void){
int n,quotient,d,row,col,k =1;
int rem,middle,x,y;
int array[30][30] ={{0,0}};

scanf("%d",&n);

while(n != 0){
rem = n%2;
quotient = n/2;
d =quotient%2;
middle = (n+1)/2;


if((rem == 0) && (d ==0)){

 printf("%d is doubly-even\n",n);}

if((rem == 0) && (d != 0)){ printf("%d is singly-even\n",n);}
if(rem != 0){printf("%d is odd\n",n);
middle = (1 + n)/2;
y = middle;
x = 1 ;
array[1][middle] = 1;
x = 1 - 1;
y = y + 1;
if(x == 0){x = n;}
if(y == n + 1) {y = 1;}

while(k <=(n*n)-1){
k++;

if(array[x][y] != 0){
if(x == n){x = 1;}
else{x = x +1;}

if(y == 1){y = n;}
else{y = y -1;}

x = x +1;

array[x][y] = k;}

else{array[x][y] = k;}

x = x - 1;
y = y + 1;
if(x == 0){x = n;}
if(y == n + 1){y = 1;}
}

for(row = 1; row <= n; row++){
for(col = 1; col <= n; col++){
printf("%4d", array[row][col]);
}printf("\n");}

//zero the array
for(row = 1; row <= n; row++){
for(col = 1; col <= n; col++){
array[row][col] = 0;}
k = 1;}
}



scanf("%d",&n);

}
return 0;
   }

