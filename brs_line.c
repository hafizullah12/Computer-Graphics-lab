#include<stdio.h>
#include<graphics.h>
void bre_line(int x1,int y1,int x2,int y2);
void main()
{
            int x1,x2,y1,y2,gmode=DETECT,gd;
//            clrscr();
            initgraph(&gmode,&gd,NULL);
            printf("*** Bresenham Line Drawing algorithm ***");
            printf("\nEnter the starting point of line\n");
            scanf("%d %d",&x1,&y1);
            printf("\nEnter the ending point of line\n");
            scanf("%d %d",&x2,&y2);
            bre_line(x1,y1,x2,y2);
            decay(340000);
            //getch();
}
void bre_line(int x1,int y1,int x2,int y2)
{
            int dx=x2-x1,dy=y2-y1;
            int p=2*dy-dx,i=dx;
            while(i>0)
            {
                        putpixel(x1,y1,7);
                        if(p<0)
                        {
                                    x1=x1+1;
                                    p=p+2*dy;
                        }
                        else
                        {
                                    x1=x1+1;
                                    y1=y1+1;
                                    p=p+2*dy-2*dx;
                        }
                        i--;
            }
}