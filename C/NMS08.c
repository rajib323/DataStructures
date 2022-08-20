// REGULA FALSI NMS08
#include<stdio.h>
#include<math.h>
#define EPS 0.0000001
double f(double x)
{
   double z;
   z= x*x*x-2.0*x-5.0;
   return (z);
}
int main()
{
    double a,b,c,h,co;
    int i;
    printf("\n----------------------------INPUT------------------------------");
    printf("\n\n Please Enter the value of lower bound(a): ");
    scanf("%lf",&a);
    printf(" Please Enter the value of upper bound(b): ");
    scanf("%lf",&b);
    printf("\n---------------------------------------------OUTPUT-----------------------------------------");
    printf("\n\n------------------------------------------------------------------------------------------");
    printf("\n  NI       a      b         f(a)            f(b)            h         c=b-h   ");
    printf("\n-------------------------------------------------------------------------------------------");
    i=0;
    c=a;
    do{
        co=c;
        h=((b-a)*f(b))/(f(b)-f(a));
        c=b-h;
        printf("\n %2d   %0.8lf   %0.8lf  %11.8lf    %11.8lf   %11.8lf   %0.8lf",i,a,b,f(a),f(b),h,c);
        i++;
        if(f(a)*f(c)<0)
            b=c;
        else
            a=c;
    }while(fabs(c-co)>EPS);

    printf("\n------------------------------------------------------------------------------------------");
    printf("\n Hence a real root of the given equation is %0.6lf",c);
    printf("\n------------------------------------------------------------------------------------------");
    printf("\n");
    printf("\n-----------------------------------------------");
    printf("\n CSE-2  Group B  Sahil Dey  Roll No-99");
    printf("\n-----------------------------------------------");
    return (0);
}