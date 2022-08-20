#include<stdio.h>
double f(double x,double y)
{
    double z;
    z=(y-x)/(y+x);
    return (z);
}
int main()
{
    double xo,yo,xn,x1,y1,h;
    int i;
    printf("\n\n-----------------------INPUT-------------------------------------");
    printf("\nEnter The Initial Value of x:");
    scanf("%lf",&xo);
    printf("\nEnter The Initial Value of y:");
    scanf("%lf",&yo);
    printf("\nEnter The Value of x to find y:");
    scanf("%lf",&xn);
    printf("\nEnter The Value of step length(h):");
    scanf("%lf",&h);
    i=0;
    printf("\n\n----------------------------------OUTPUT----------------------------------------------");
    printf("\n\n--------------------------------------------------------------------------------------");
    printf("\n NI         xo             yo             f(xo,yo)               y1        x1=xo+h");
    printf("\n----------------------------------------------------------------------------------------");
    for(;x1<xn-h;i++)
    {
        y1=yo+h*f(xo,yo);
        x1=xo+h;
        printf("\n %2d         %0.4lf     %0.8lf       %0.8lf         %0.8lf       %0.4lf",i,xo,yo,f(xo,yo),y1,x1);
        xo=x1;
        yo=y1;

        }
    printf("\n---------------------------------------------------------------------------------------");
    printf("\nHence The Value of y(%0.2lf)=%0.6lf",x1,y1);
    printf("\n\n");
    printf("\n-----------------------------------------------");
    printf("\n CSE-2  Group A  Rajib Lochan Nandi  Roll No-72");
    printf("\n-----------------------------------------------");
    return 0;
}