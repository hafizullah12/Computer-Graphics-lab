#include <graphics.h>
int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   fillellipse(400, 180, 80, 40);

   getch();
   closegraph();
   return 0;
}