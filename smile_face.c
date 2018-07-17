#include<stdio.h>
#include<graphics.h>
void main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");
    arc(200, 200, 0, 360, 100);
    arc(150, 150, 0, 360, 10);
    arc(250, 150, 0, 360, 10);
    arc(200, 200, 0, 360, 5);
    arc(200, 250, 180, 360, 30);
    getch();
    closegraph();
}