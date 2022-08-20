#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm,gd = DETECT;

    initgraph(&gd, &gm, (char*)"");


    //circle(300,100,radius);
    line(120, 220, 300, 50);
    line(120, 220, 480, 220);
    line(480, 220, 300, 50);

    //walls
    rectangle(150,220,450,400);

    //door
    rectangle(255,280,345,400);

    getch();
    closegraph();

    return 0;
}

