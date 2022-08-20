#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm,gd = DETECT;

    initgraph(&gd, &gm, (char*)"");


    //circle(300,100,radius);
    setfillstyle(4,8);
    line(120, 220, 300, 50);
    line(120, 220, 480, 220);
    line(480, 220, 300, 50);
    floodfill(300,160,WHITE);

    //walls
    setfillstyle(SOLID_FILL,6);
    rectangle(150,220,450,400);
    floodfill(155,225,WHITE);

    //door
    setfillstyle(SOLID_FILL,0);
    rectangle(255,280,345,400);
    floodfill(265,285,WHITE);

    //windows
    setfillstyle(SOLID_FILL,0);
    rectangle(175,250,230,310);
    rectangle(365,250,420,310);
    floodfill(178,255,WHITE);
    floodfill(368,255,WHITE);

    //sun
    setfillstyle(SOLID_FILL,12);
    circle(525,100,50);
    floodfill(525,100,WHITE);

    getch();
    closegraph();

    return 0;
}

