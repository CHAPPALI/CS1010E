#include <stdio.h>
#include <math.h>
/*plot 3.c*/
double gridToGraph(int i,double low,double high,int n);
int graphToGrid(double x,double low,double high,int n);

int main(void){
int a,b,c,d;
double xl,xh;
int column;
double value;

scanf("%d %d %d %d",&a,&b,&c,&d);
scanf("%lf %lf",&xl,&xh);
printf("%d %d %d %d\n",a,b,c,d);
printf("xl = %f; xh = %f\n",xl,xh);

if((xl > 0 && xh > 0) || (xl < 0 && xh < 0)){
   printf("y-axis is outside the plot\n");}
else{
    column = graphToGrid(0.0,xl,xh,60)+ 1;
     /*calculates position of y axis */

    value = gridToGraph(column-1,xl,xh,60);

    /*calculates value of x wrt to x(low)*/

    printf("y-axis is located at column %d\n",column);

    printf("column %d is x = %f\n",column,value);
                }


return 0;
}
int graphToGrid(double x,double low,double high,int n){
    double column,interval;
    interval = (high-low)/(n-1);
    column =(x-low)/interval; /*takes 0,0 as the high point and counts how many intervals
                               in between*/
    return rint(column);
}
double gridToGraph(int i,double low,double high,int n){
double interval;
interval = (high - low)/(n-1);

                                     /* returns high which is zero If i omit line 45 and input
                                      -4.0 and 0.0 the x = -0.0 ,based on calculator there is no such thing
                                      as a negative zero */
 return (low + interval * i); }









