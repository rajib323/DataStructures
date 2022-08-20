#include<stdio.h>
double f(double x,double y)
{
    double z;
    z=(1-x*y)/(x*x);
    return (z);
 }
int main()
 {
    double x0,y0,xn,x1,h;
    double k1,k2,k3,k4,k;
    int i;
    printf("\n\n-----------------------INPUT-------------------------------------");
    printf("\nEnter The Initial Value of x:");
    scanf("%lf",&x0);
    printf("\nEnter The Initial Value of y:");
    scanf("%lf",&y0);
    printf("\nEnter The Value of x to find y:");
    scanf("%lf",&xn);
    printf("\nEnter The Value of step length(h):");
    scanf("%lf",&h);
    i=0;
    
    printf("\n\n-----------------------OUTPUT--------------------------------");
    printf("\n\n-----------------------------------------------------------------------------------");
    printf("\n NI       xo           yo           f(xo,yo)           k         y1        x1=xo+h");
    printf("\n-------------------------------------------------------------------------------------");
    for(;x0<=xn;i++)
    { 
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);
        k=(k1+2*k2+2*k3+k4)/6.0;
        printf("\n %d     %0.4lf   %11.8lf   %11.8lf    %11.8lf   %11.8lf   %0.4lf",i,x0,y0,f(x0,y0),k,y0+k,x0+h);
        y0=y0+k;
        x0=x0+h;
        
    }
    printf("\n----------------------------------------------------");
    printf("\nHence The Value of y(%0.2lf)=%0.6lf",x0,y0);
    printf("\n\n");
    printf("\n-----------------------------------------------");
    printf("\n CSE-2  Group A  Rajib Lochan Nandi  Roll No-72");
    printf("\n-----------------------------------------------");
    return 0;
}