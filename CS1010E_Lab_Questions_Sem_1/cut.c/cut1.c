#include <stdio.h>


int main(void){
int n,i,length[21];
scanf("%d",&n);
printf("Length: %d\n",n);
for(i = 0; i < n;i++){

scanf("%d",&length[i]);

}

for(i= 0; i < n; i++){
 printf("Price of length %d: %d\n",i+1,length[i]);
}




return 0;
}
