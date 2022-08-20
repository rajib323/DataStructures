// NEWTON RAPHSON NMS09
#include<stdio.h>
#include<math.h>
# define EPS 0.0000001
double f(double x)
{
    double z;
    z=x*sin(x)+cos(x);
    return (z);
}
double df(double x)
{
    double z;
    z=x*cos(x);
    return (z);
}
int main()
{
    double a,b,xo,x,h;
    int i;
    printf("\n - - - - - - I N P U T - - - - - - -");
    printf("\n Enter the value of lower bound(a): ");
    scanf("%lf",&a);
    printf(" Enter the value of upper bound(b): ");
    scanf("%lf",&b);
    printf("\n - - - - - - O U T P U T - - - - - - -");
    i=0;
    printf("\n\n-------------------------------------------------------------------------");
    printf("\n NI       xo           f(xo)        f'(xo)         h          x=xo-h");
    printf("\n-------------------------------------------------------------------------");
    x = (a+b)/2.0;
    do
    {
           xo=x;
           h = f(xo)/df(xo);
           x = xo-h;

           printf("\n %2d   %0.8lf   %11.8lf   %11.8lf  %11.8lf  %11.8lf ",i,xo,f(xo),df(xo),h,x);
           i++;
    }while(fabs(xo-x)>EPS);
    printf("\n-------------------------------------------------------------------------");
    printf("\n A real root of the given Equation is %0.6lf",x);
    printf("\n-------------------------------------------------------------------------");
    printf("\n");
    printf("\n-----------------------------------------------");
    printf("\n CSE-2  Group A  Rajib Lochan Nandi  Roll No-72");
    printf("\n-----------------------------------------------");
    return 0;
}