#include<graphics.h>
#include<stdio.h>

void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
    dx=x1-x0;  //100
    dy=y1-y0;

    int absdy=abs(y1-y0);   //-170
    int absdx=abs(x1-x0);


    x=x0;   //400
    y=y0;   //150

    if(absdx>absdy){
        p=2*absdy-absdx;
        for(int i=0;i<absdx;i++){
            x=dx<0?x-1:x+1;
            if(p<0){
                p=p+2*absdy;
            }
            else{
                y=dy<0?y-1:y+1;
                p=p+2*absdy-2*absdx;
            }
            putpixel(x,y,YELLOW);
        }
    }
    else{
        p=2*absdx-absdy;
        for(int i=0;i<absdy;i++){
            y=dy<0?y-1:y+1;
            if(p<0){
                p=p+2*absdx;
            }
            else{
                x=dx<0?x-1:x+1;
                p=p+2*absdx-2*absdy;
            }
            putpixel(x,y,YELLOW);
        }
    }

}

int main()
{
   int gd=DETECT,gm;
   int x1,y1,x2,y2;

   initgraph(&gd,&gm,(char *)" ");

   //line(400,150,300,300);
   drawline(400,150,300,300);
   //line(300,300,400,130);
   drawline(300,300,400,130);


   delay(2000);
   closegraph();
   return 0;
}

