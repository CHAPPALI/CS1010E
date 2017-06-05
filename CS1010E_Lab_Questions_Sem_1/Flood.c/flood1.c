#include <stdio.h>
#include <stdbool.h>

int main(void){

int array[10][10];
int row,col,tide;

scanf("%d",&tide);


for( row= 0; row <10;row++){
for(col = 0;col < 10;col++){

scanf("%d",&array[row][col]);
 } }   
 
printf("%d\n",tide);

for( row= 0; row <10;row++){
for(col = 0;col < 10;col++){

printf("%d",array[row][col]);
 } printf("\n");
 
     } 
   
   
   
   
   
   return 0;
   
   }




