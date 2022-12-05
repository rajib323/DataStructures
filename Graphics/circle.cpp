#include <graphics.h>
#include <stdio.h>

void EightWaySymmetricPlot(int xc,int yc,int x,int y)
{
  putpixel(x+xc,y+yc,RED);
  putpixel(x+xc,-y+yc,RED);
  putpixel(-x+xc,-y+yc,RED);
  putpixel(-x+xc,y+yc,RED);
  putpixel(y+xc,x+yc,RED);
  putpixel(y+xc,-x+yc,RED);
  putpixel(-y+xc,-x+yc,RED);
  putpixel(-y+xc,x+yc,RED);
}

void BresenhamCircle(int xc,int yc,int r)
{
   int p=1-r,x=0,y=r;
   EightWaySymmetricPlot(xc,yc,x,y);
   //putpixel(xc+x,yc+y,RED);

   while(x<=y)
   {
     if(p<=0)
     {
       p=p+2*x+1;
     }
     else
     {
        p=p+(2*x)-2*y+1;
        y=y-1;
     }
     x++;
     EightWaySymmetricPlot(xc,yc,x,y);
     //putpixel(xc+x,yc+y,RED);
   }
}

int  main(void)
{
   int xc,yc,r,gd=VGA, gm=DETECT, errorcode;


   printf("Enter the values of xc and yc :");
   scanf("%d%d",&xc,&yc);
   printf("Enter the value of radius  :");
   scanf("%d",&r);
   initgraph(&gd, &gm, "");
   putpixel(xc,yc,YELLOW);
   BresenhamCircle(xc,yc,r);

   getch();
   closegraph();
   return 0;
}
