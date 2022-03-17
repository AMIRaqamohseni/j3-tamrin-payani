#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
int main()
{
    int c,p,gd=DETECT,gm;
    printf("P: ");
    scanf("%d",&p);
    printf("C:");
    scanf("%d",&c);
    clrscr();
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    setcolor(c);
    line(0+p,30+p,15+p,0+p);
    line(15+p,0+p,20+p,30+p);

    line(40+p,30+p,40+p,0+p);
    line(40+p,15+p,50+p,15+p);
    line(40+p,0+p,50+p,0+p);
    getch();
    closegraph();
    return 0;
}