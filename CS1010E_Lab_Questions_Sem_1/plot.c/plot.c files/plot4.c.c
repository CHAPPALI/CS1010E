#include <stdio.h>
#include <math.h>
/*plot 5 indented to plot4.*/
double gridToGraph(int i, double low, double high, int n);
double graphToGrid(double x, double low, double high, int n);
double polynomial(double x, int c3, int c2, int c1, int c0);
void findMinMax(int c3, int c2, int c1, int c0, double *yl, double *yh, double xl, double xh);
void plotGraph(int c3, int c2, int c1, int c0, double xl, double xh);

int main(void) {
   int c3, c2, c1, c0, i, yaxis, xaxis;
   double xl, xh, xval, yl, yh;
   scanf("%d%d%d%d", &c3, &c2, &c1, &c0);
   scanf("%lf%lf", &xl, &xh);
    printf("%d %d %d %d\n", c3, c2, c1, c0);
   printf("xl = %f; xh = %f\n", xl, xh);
    if ((xl > 0 && xh > 0) || (xl < 0 && xh < 0)) {
      printf("Domain: [%f, %f] with y-axis outside the plot\n", xl, xh);
   }
   else {
      yaxis = graphToGrid(0.0, xl, xh, 60) + 1;
      printf("Domain: [%f, %f] with y-axis located at column %d\n", xl, xh, yaxis);
   }
   findMinMax(c3, c2, c1, c0, &yl, &yh, xl, xh);

    /* plotGraph(c3, c2, c1, c0, xl, xh);*/
   if ((yl > 0 && yh > 0) || (yl < 0 && yh < 0)) {
      printf("Range: [%f, %f] with x-axis outside the plot\n", yl, yh, xaxis);
   }
   else {
      xaxis = graphToGrid(0.0, yl, yh, 20) + 1;
      printf("Range: [%f, %f] with x-axis located at row %d\n", yl, yh, xaxis);
   }
   return 0;
}
double gridToGraph(int i, double low, double high, int n) {
   double interval;
   interval = (high-low)/(n-1);
   if (i == 59) {
      return high;
   }
   else {
      return low + interval*i;
   }
}
double graphToGrid(double x, double low, double high, int n) {
   double column;
   column = ((x-low)*(n-1))/(high-low);
   return rint(column);
}
double polynomial(double x, int c3, int c2, int c1, int c0) {
   double y;
   y = c3*pow(x,3) + c2*pow(x,2) + c1*pow(x,1) + c0;
   return y;
}
void findMinMax(int c3, int c2, int c1, int c0, double *yl, double *yh, double xl, double xh) {
   int i;
   double yvalue, xvalue;
   i = 0;
   xvalue = gridToGraph(i, xl, xh, 60);
   yvalue = polynomial(xvalue, c3, c2, c1, c0);
   *yl = yvalue;
   *yh = yvalue;
   for (i = 1; i <= 60; i++) {
      xvalue = gridToGraph(i-1, xl, xh, 60);
      yvalue = polynomial(xvalue, c3, c2, c1, c0);
      if (yvalue <= *yl) {
         *yl = yvalue;
      }
      if (yvalue >= *yh) {
         *yh = yvalue;
      }
   }
   return;
}
/* void plotGraph(int c3, int c2, int c1, int c0, double xl, double xh) {
   int column, row, xaxis, yaxis, xcolumn, yrow;
   double xvalue, yvalue, yl, yh;
   findMinMax(c3, c2, c1, c0, &yl, &yh, xl, xh);
   xaxis = graphToGrid(0.0, yl, yh, 20) + 1;
   yaxis = graphToGrid(0.0, xl, xh, 60) + 1;
   for (row = 20; row >= 1; row--) {
      for (column = 1; column <= 60; column++) {
         xvalue = gridToGraph(column-1, xl, xh, 60);
         yvalue = polynomial(xvalue, c3, c2, c1, c0);
         xcolumn = graphToGrid(xvalue, xl, xh, 60) + 1;
         yrow = graphToGrid(yvalue, yl, yh, 20) + 1;
         if (xcolumn == column && yrow == row) {
            printf("x");
         }
         else {
            if (yaxis == column && xaxis == row) {
               printf("+");
            }
            if (yaxis == column && xaxis != row) {
               printf("|");
            }
            if (yaxis != column && xaxis == row) {
               printf("-");
            }
            if (yaxis != column && xaxis != row) {
               printf(" ");
            }
         }
      }
      printf("\n");
   }
   return;
} */
