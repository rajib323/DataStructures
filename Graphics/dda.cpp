#include<graphics.h>
#include<stdio.h>
 void dda(int x1,int y1,int x2,int y2)
 {
    float dy,dx;
    int i=0;
    dy=(float)(y2-y1);
    dx=(float)(x2-x1);
    int steps;
    if(dx>=dy)
        steps=dx;
    else
        steps=dy;

    float yinc=dy/steps;
    float xinc=dx/steps;

    //printf("%f\n",xinc);
    putpixel(x1,y1,YELLOW);

    while(i<=steps){
        x1=x1+xinc;
        y1=y1+yinc;
        putpixel(x1,y1,YELLOW);
        //printf("%d  %d\n",x1,y1);
        i++;
    }
}


int main()
{
   int gd=DETECT,gm;
   int x1,y1,x2,y2;

   initgraph(&gd,&gm,(char *)" ");

   //line(400,150,300,300);
   dda(400,150,300,300);
   //line(300,300,400,130);
   dda(300,300,400,130);


   delay(2000);
   closegraph();
   return 0;
}

