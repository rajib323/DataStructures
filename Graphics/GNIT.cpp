#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    line(10,100,10,200);
    line(10,100,70,100);
    line(10,200,70,200);
    line(70,200,70,150);
    line(70,150,60,150);

    line(100,100,100,200);
    line(100,100,200,200);
    line(200,100,200,200);

    line(230,100,330,100);
    line(230,200,330,200);
    line(280,100,280,200);

    line(360,100,460,100);
    line(410,100,410,200);

    getch();
    closegraph();
    return 0;
}
