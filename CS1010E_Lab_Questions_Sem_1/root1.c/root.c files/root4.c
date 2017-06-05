#include <stdio.h>
#include <math.h>

double polynomial(double x,int c3,int c2,int c1,int c0);
int main(void){
int c3,c2,c1,c0;
double a,b,p,q,r,mid,t,root,pRoot;
t=0.0001;
root = 0;
scanf("%d%d%d%d",&c3,&c2,&c1,&c0);
scanf("%lf%lf",&a,&b);
mid = (a+b)/2;
p = polynomial(a,c3,c2,c1,c0);
q = polynomial(b,c3,c2,c1,c0);
r = polynomial(mid,c3,c2,c1,c0);
printf("a = %f; b = %f; m = %f; p(a) = %f; p(b) = %f; p(m) = %f\n",a,b,mid,p,q,r);
if ((fabs(a-b) < t) || (r == 0)){
 root = mid;
 pRoot = r;
 printf("root = %f; p(root) = %f\n",root,pRoot);
}
else{
    printf("root not found\n");
}

 return 0;
}
double polynomial(double x,int c3,int c2,int c1,int c0){
  double y;
  y = c3*pow(x,3) + c2*pow(x,2)+ c1*pow(x,1) + c0;
  return y;

}
