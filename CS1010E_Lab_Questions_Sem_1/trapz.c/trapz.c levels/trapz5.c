#include<stdio.h>
#include <math.h>
#include <dos.h>
double polynomial(double x,int c3,int c2,int c1,int c0);
double integralPoly(double x,int c3,int c2,int c1,int c0);
void trapz(int c3, int c2, int c1, int c0, double a, double b, int n);

int main(void){
int c3,c2,c1,c0;
double avalue,bvalue,upperlim,lowerlim,a,b,artrapz;

scanf("%d %d %d %d",&c3,&c2,&c1,&c0);
scanf("%lf %lf",&a,&b);

avalue = polynomial(a,c3,c2,c1,c0);
bvalue = polynomial(b,c3,c2,c1,c0);


printf("%d %d %d %d\n",c3,c2,c1,c0);
printf("a = %lf; b = %lf\n",a,b);


upperlim = integralPoly(b,c3,c2,c1,c0);
lowerlim = integralPoly(a,c3,c2,c1,c0);


printf("exact = %lf\n",upperlim-lowerlim);

trapz(c3,c2,c1,c0,a,b,5);


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

void trapz(int c3, int c2, int c1, int c0, double a, double b, int n){
double h,Area,endPoint,counter1,pa,pb;

h = (b-a)/n;
for(counter1 = 1 ; counter1 <= n;counter1++){

endPoint = a + h *(counter1-1);        // call this the Zhang Pan methodlogy //

pa = (c3)*pow(endPoint,3)+(c2)*pow(endPoint,2)+c1*endPoint +c0;
pb = (c3)*pow((endPoint+h),3)+(c2)*pow((endPoint+h),2)+c1*(endPoint+h) +c0;

Area = (h*(pa+ pb))/2.0;
printf("area within [%lf, %lf] = %lf\n",endPoint,endPoint+h,Area);

}
return;
}








