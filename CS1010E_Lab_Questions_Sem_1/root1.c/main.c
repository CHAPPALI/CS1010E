#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*For debugging*/

double polynomialA(int c3,int c2,int c1,int c0, double x);

int main(void)
{
   int c3;
   int c2;
   int c1;
   int c0;
   double a = 0;
   double b =0;
   double c = 0;
   double d= 0;
   double mid = 0;
   double funcmid = 0;

   scanf("%d %d %d %d",&c3,&c2,&c1,&c0);

   scanf("%lf %lf",&a,&b);




   c= polynomialA(c3,c2 ,c1,c0,a);
   d= polynomialA(c3,c2,c1,c0,b);
   mid = (a+b)/2;
   funcmid = polynomialA(c3,c2,c1,c0,mid);




   printf("a = %lf; b = %lf; m = %lf; p(a) = %lf; p(b) = %lf; p(m) = %lf\n",a,b,mid,c,d,funcmid);

    return 0;
    }
 double polynomialA(int c3,int c2,int c1,int c0,double x){

 double fpointA = c3 * pow(x,3) + c2 * pow(x,2)+c1 * x + c0;

 return fpointA;


 }
