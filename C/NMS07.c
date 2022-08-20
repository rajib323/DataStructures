#include <stdio.h>
#include <math.h> 
#define EPS 0.0000001
float func(float a){
    return (float)pow(a, a) +2.0*a-2.0;
}

float value(int in,float a, float b){
    float c;
    if((b-a)>EPS) {
        ++in;
        c=(a+b)/2; 
        printf("\n%d\t%f\t%f\t%f\t%f",in,a,b,c,func(c));
        if(func(a)*func(c) <0) 
            return value(in,a,c);
        else
            return value(in,c,b);
    }
    return c!=0?a:0.0;
}
int main(){
    printf("\n");
    double a,b;
    
    printf("\n------------------------------------------------------------------------");
    printf("\nPlease Enter the value of lower limit(a) : ");
    scanf("%lf",&a);
    printf("\nPlease Enter the value of upper limit(b) : ");
    scanf("%lf",&b);
    printf("\n------------------------------------------------------------------------");
    printf("\n------------------------------------------------------------------------");
    printf("\nNI           a            b              c                 f(c)");
    printf("\n------------------------------------------------------------------------");
    printf("\n------------------------------------------------------------------------");
    printf("\n\nRoot of the Equation : %f",value (-1,a,b));
    printf("\n------------------------------------------------------------------------");
    printf("\n CSE-2 Group A Rajib Lochan Nandi  Roll_No-72");
    printf("\n------------------------------------------------------------------------");
    printf("\n");
}