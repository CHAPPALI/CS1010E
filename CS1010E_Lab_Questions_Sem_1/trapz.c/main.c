#include<stdio.h>
#include <math.h>

double polynomial(double x,int c3,int c2,int c1,int c0);
double integralPoly(double x,int c3,int c2,int c1,int c0);
double trapz(int c3, int c2, int c1, int c0, double a, double b, int n);
int main(void){

int c3,c2,c1,c0,n;
double upperlim,lowerlim,a,b,exact;
double sum;

scanf("%d %d %d %d",&c3,&c2,&c1,&c0);
scanf("%lf %lf",&a,&b);

printf("%d %d %d %d\n",c3,c2,c1,c0);
printf("a = %lf; b = %lf\n",a,b);


upperlim = integralPoly(b,c3,c2,c1,c0);
lowerlim = integralPoly(a,c3,c2,c1,c0);
exact = upperlim-lowerlim;

printf("exact = %lf\n",exact);


for(n = 1;fabs(sum-exact)>= 0.001 ;n++)
{
 sum = trapz(c3,c2,c1,c0,a,b,n);
}
if(n == 1){ n = 2;}
printf("approx using %d trapz = %lf\n",n-1,sum);

return 0;
   }
double integralPoly(double x,int c3,int c2,int c1,int c0){
double value;



value = ((double)c3/4)*pow(x,4)+((double)c2/3)*pow(x,3)+((double)c1/2)*pow(x,2)+((double)c0)*x;
return value;

   }


double polynomial(double x,int c3,int c2,int c1,int c0){
double yvalue;

yvalue =(c3)*pow(x,3)+(c2)*pow(x,2)+c1*x +c0;
return yvalue;
   }

double trapz(int c3, int c2, int c1, int c0, double a, double b, int n){
double h,Area,endPoint,counter1,pa,pb,sum;
sum = 0;
h = (b-a)/n;

for(counter1 = 1 ; counter1 <= n;counter1++){

endPoint = a + h *(counter1-1);
 pa = (c3)*pow(endPoint,3)+(c2)*pow(endPoint,2)+c1*endPoint +c0;
 pb = (c3)*pow((endPoint+h),3)+(c2)*pow((endPoint+h),2)+c1*(endPoint+h) +c0;

 Area = (h*(pa+ pb))/2.0;
 sum = sum + Area;
}




return sum;
}
