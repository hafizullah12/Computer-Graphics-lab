#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int BoundaryFill(int x,int y)
{
    int CheckColor;
    CheckColor=getpixel(x,y);
    if((CheckColor!=WHITE)&&(CheckColor!=YELLOW))
    {
        putpixel(x,y,WHITE);
        BoundaryFill(x+1,y);
        BoundaryFill(x,y+1);
        BoundaryFill(x-1,y);
        BoundaryFill(x,y-1);
    }
    return 0;
}
int main()
{
    int x,y,gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    rectangle(50,50,200,200);
    x=110,y=111;
    BoundaryFill(x,y);
    getch();
    closegraph();
    return 0;
}