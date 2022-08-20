/*  Finding Solution of a System of Linear Equations
    By Using Gauss Seidel Method                     */

# include<stdio.h>
# include<math.h>

# define EPS 0.0000001
# define MX 10

int main()
 {
   int i,j,k=1,n,flag=1;
   double S,x0[MX],x[MX];

   double A[][MX]={{0,0,0,0,0},
                 {0,9.17,3.62,-1.68,-2.26},
                 {0,1.44,6.95,-2.14,1.86},
                 {0,2.32,1.95,-8.27,1.58},
                 {0,3.21,-0.86,2.42,-7.20}};

   double b[]={0,5.21,1.42,2.16,3.28};

    printf("\n ----------------- INPUT ------------------");
    printf("\n Enter the number of variables(n): ");
    scanf("%d",&n);

    printf("\n     ");
    for(i=1;i<=n;i++)
     {
       printf("    x(%1d)     ",i);
       x0[i]=0.0;
       x[i]=0.0;
     }

     for(i=1;i<=n;i++)
       {
         printf("\n  ");
         for(j=1;j<=n;j++)
           printf(" %10.6lf ",A[i][j]);

         printf("   %.4lf",b[i]);
       }

     printf("\n\n  ");

    printf("\n NI  ");
    for(i=1;i<=n;i++)
     {
       printf("    x(%1d)     ",i);
       x0[i]=0.0;
       x[i]=0.0;
     }
     printf("\n-------");
     for(i=1;i<=n;i++)
       printf("-------------");

     while(flag)
     {
       flag=0;
       printf("\n %2d",k);

       for(i=1;i<=n;i++)
       {
             x0[i]=x[i];
         S=0.0;

         for(j=1;j<=n;j++)
           if(i!=j)
              S=S+A[i][j]*x[j];

         x[i]=(b[i]-S)/A[i][i];

         if(fabs(x0[i]-x[i])>EPS)
            flag=1;

         printf(" %11.8lf ",x[i]);


       }

      k++;
     }
     printf("\n-------");
     for(i=1;i<=n;i++)
       printf("-------------");

     printf("\n\n\n Hence The Solution is ");
    for(i=1;i<=n;i++)
      printf("\n x(%1d) =%10.6lf",i,x[i]);
    printf("\n-----------------------------------------------");
    printf("\n CSE-2  Group A  Rajib Lochan Nandi  Roll No-72");
    printf("\n-----------------------------------------------");
    printf("\n\n");

    return(1);
 }