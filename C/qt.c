/*  Numerical solution of an ordinary differential
    equation by using Modified Euler's Method       */
#include<stdio.h>
#include<math.h>
#define EPS 0.00000001

double f(double x,double y)
 {
   double z;
   z=(1.0-x*y)/(x*x);
   return (z);
 }

int main()
 {
   double x,y,x1,y1,y2,xn,h;
   int i,j;
   printf("\n\n-----------------------INPUT-------------------------------------");
   printf("\nEnter The Initial Value of x: ");
   scanf("%lf",&x1);
   printf("\nEnter The Initial Value of y: ");
   scanf("%lf",&y1);
   printf("\nEnter The Value of x to find y: ");
   scanf("%lf",&xn);
   printf("\nEnter The Value of step length(h): ");
   scanf("%lf",&h);
   y2=y1;
   i=0;
  
   printf("\n\n----------------------- OUTPUT -----------------------------");
   printf("\n\n----------------------------------------------------------------");
   printf("\n NI      xo         yo           y1          y2          x1");
   printf("\n----------------------------------------------------------------");
   for(x=x1;x<xn-h+0.00001;x=x+h)
    {
      y=y2;
      y2=y+h*f(x,y);
      x1=x+h;
      printf("\n %2d   %0.4lf   %0.8lf   %0.8lf                %0.4lf",i,x,y,y2,x1);
      j=0;
      do
       {
         y1=y2;
         y2=y+h*(f(x,y)+f(x1,y1))/2.0;
         printf("\n                       %2d   %0.8lf   %0.8lf   %0.4lf",j,y1,y2,x1);
         j=j+1;
       }while(fabs(y2-y1)>EPS);
      i=i+1;
      printf("\n"); 
   }
   y1=y2;
  printf("\n-------------------------------------------------------------------");
  printf("\nHence The Value of y(%0.2lf)=%0.6lf",x1,y1);
  printf("\n\n\n");
  printf("\n-----------------------------------------------");
  printf("\n CSE-2  Group A  Rajib Lochan Nandi  Roll No-72");
  printf("\n-----------------------------------------------");
  return 0;
}