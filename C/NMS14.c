#include <stdio.h>
#include <math.h>
#define MX 20

int main()
{
 int i,n;
 double LCL[]={0,110,120,130,140,150,160,170,180};
 double UCL[]={0,119,129,139,149,159,169,179,189};
 int F[]={0,5,7,12,20,16,10,7,3},SF;
 double LCB[MX], UCB[MX], X[MX], Y[MX], FY[MX], FY2[MX], SFY, SFY2, Var, SD, a, wc, d;
 n=8;
 printf("\n-----------------------OUTPUT--------------------------------");
 printf("\n\n                       TABLE-1");
 printf("\n-------------------------------------------------------------");
 printf("\n         Class          Class          ");
 printf("\n SL      Limit         Boundary      Frequency     Midvalue ");
 printf("\n-------------------------------------------------------------");
 wc=LCL[2]-LCL[1];
 d=LCL[2]-UCL[1];

 for(i=1;i<=n;i++)
  {  
  LCB[i]=LCL[i]-d/2.0;
  UCB[i]=UCL[i]+d/2.0;
  X[i]=(UCL[i]+LCL[i])/2.0;
  printf("\n %2d    %.0lf - %.0lf   %0.2lf - %0.2lf     %4d         %0.2lf ",i, LCL[i], UCL[i], LCB[i], UCB[i], F[i], X[i]);
  }
 printf("\n-------------------------------------------------------------");
 a= X[(int)(n+1)/2];
 printf("\n\n                        TABLE-2");
 printf("\n----------------------------------------------------------------");
 printf("\n SL        X        Y(X-a)/I       F         FY         FY^2");
 printf("\n------------------------------------------------------------------");
 SFY=0; SFY2=0,SF=0;
 
 for(i=1;i<=n;i++)
  {
  SF = SF + F[i];
  Y[i]=(X[i]-a)/wc;
  FY[i]=F[i]*Y[i];
  FY2[i]=F[i]*Y[i]*Y[i];
  SFY= SFY+FY[i];
  SFY2= SFY2+FY2[i];
  printf("\n %2d   %8.2lf    %8.2lf      %4d     %8.2lf    %8.2lf",i, X[i], Y[i], F[i], FY[i], FY2[i]);
      }
  printf("\n--------------------------------------------------------------------");
  printf("\n                                %4d     %8.2lf    %8.2lf",SF,SFY,SFY2);
  printf("\n--------------------------------------------------------------------");
  Var= SFY2/SF-(SFY/SF)*(SFY/SF);
  printf("\n Var(Y)=%0.3lf",Var);
  Var= wc*wc*Var;
  SD=sqrt(Var);
  printf("\n-----------------------------------------");
  printf("\n Var(X)=%0.3lf",Var);
  printf("\n SD(X)=%0.3lf",SD);
  printf("\n-----------------------------------------------");
  printf("\n CSE-2  Group A  Rajib Lochan Nandi  Roll No-72");
  printf("\n-----------------------------------------------");
  printf("\n\n");
  return 0;
}