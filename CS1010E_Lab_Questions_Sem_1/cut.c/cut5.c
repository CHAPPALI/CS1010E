#include <stdio.h>
#include <stdlib.h>
#define SIZE 21

int main(void){
int n,a[SIZE] = {0},i,j,x,y,z;

scanf("%d",&n);
y = 0;
z = 0;
for(i = 0;i < n; i++){
scanf("%d",&a[i]);
    }
for( i = 0; i < n ;i++){
if((i+1) > 1){
for( j = 1; (j <= (i+1))&&(((i+1)- j)) != 0; j++){
if(j <= ((i+1)/2)){
x = ((i+1)- j)-1;
y = a[x] + a[j-1];
if(y > a[i]){  a[i] = y;}
  }
     }
      }
        }

z = a[n-1];
printf("Max price of rod: %d\n",z);

return 0;
}

