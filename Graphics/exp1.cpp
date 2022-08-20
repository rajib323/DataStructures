#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm,gd = DETECT;
    int stangle = 45, endangle = 50;
    int radius = 50;

    initgraph(&gd, &gm, (char*)"");


    circle(300,100,radius);
    line(300,150,300,300);
    line(300,200,400,130);
    line(300,300,370,380);
    line(300,200,200,130);          //
    line(300,300,230,380);

    getch();
    closegraph();

    return 0;
}
