#include<graphics.h>
int  main()
{
   int gd = DETECT, gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");

   circle(100,100,50);          /* drawn in white color */
   setcolor(YELLOW);
   circle(200,200,50);          /* drawn in red color   */

   getch();
   closegraph();
   return 0;
}
