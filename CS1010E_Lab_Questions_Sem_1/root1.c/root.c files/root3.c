#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double polynomialA(int c3,int c2,int c1,int c0, double a);
double polynomialB(int c3,int c2,int c1,int c0, double b);
double polynomialC(int c3, int c2,int c1,int c0, double mid);
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
   d= polynomialB(c3,c2,c1,c0,b);
   mid = (a+b)/2;
   funcmid = polynomialC(c3,c2,c1,c0,mid);




   printf("a = %lf; b = %lf; m = %lf; p(a) = %lf; p(b) = %lf; p(m) = %lf\n",a,b,mid,c,d,funcmid);

    return 0;
    }
 double polynomialA(int c3,int c2,int c1,int c0,double a){

 double fpointA = c3 * pow(a,3) + c2 * pow(a,2)+c1 * a + c0;

 return fpointA;


 }
 double polynomialB(int c3,int c2,int c1,int c0,double b){


 double fpointB = c3 * pow(b,3) + c2 * pow(b,2)+c1 * b + c0;

 return fpointB;}

 double polynomialC(int c3,int c2,int c1,int c0, double mid){


 double fpointM =  c3 * pow(mid,3) + c2 * pow(mid,2)+c1 * mid + c0;


  return fpointM;

 }
