#include<stdio.h>
#include<math.h>
double f(double x){
  double z=1.0/(1.0+x*x);
  return (z);
}
 
int main()
{
  double a,b,h,x,PI,sum,Va,Vt,Ea,Ep,Er;
  int i,n,p;
  printf("\n-------------------------------------");
  printf("\nPlease Enter the value of lower limit(a) : ");
  scanf("%lf",&a);
  printf("\nPlease Enter the value of upper limit(b) : ");
  scanf("%lf",&b);
  printf("\nPlease Enter the number of interval(n) : ");
  scanf("%d",&n);
  printf("\n-------------------------------------");
  sum=0.0;
  x=a;
  h=(b-a)/n;
  printf("\n-------------------------------------");
  printf("\nI\tp\tx\ty=f(x)");
  printf("\n-------------------------------------");
  for(i=0;i<=n;i++)
  {
    p=5;
    if(i==0||i==n)
        p=1;
    else if(i%2==0)
        if(i%3==0)
            p=2;
        else
            p=1;
    else if(i%3==0)
        p=6;
    sum=sum+p*f(x);
    printf("\n%2d\t%2d\t%0.4lf\t%0.8lf",i,p,x,f(x));
    x=x+h;
  }
  printf("\n-------------------------------------");
  sum=(3*h*sum)/10.0;
  printf("\nValue of Integration is %0.8lf ",sum);
  Va=4.0*sum;
  Vt=4.0*atan(1);
  Ea=fabs(Vt-Va);
  printf("\nTrue Value of PI is %0.8lf",Vt);
  printf("\nCalculated Value of PI is %0.8lf ",Va);

  printf("\n-------------------------------------");
  printf("\nAbsolute Error: %0.16lf",Ea);
  Er=Ea/Vt;
  Ep=Er*100.0;
  printf("\nRelative Error: %0.16lf",Er);
  printf("\nPercentage Error: %0.12lf%%",Ep);
  printf("\n\n\n");
  printf("\n-------------------------------------");
  printf("\n CSE-2 Group A Rajib Lochan Nandi  Roll_No-72");
  printf("\n\n\n");
  return 0;
 }
