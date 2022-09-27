#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
setcolor(WHITE);
circle(130,130,10);
circle(170,130,10);
ellipse(150,170,205,335,20,9);
ellipse(150,170,205,335,20,10);
ellipse(150,170,205,335,20,11);


circle(150,150,60);
line(150,40,120,95);
line(150,40,180,95);
// setfillstyle(SOLID_FILL,LIGHTCYAN);
circle(150,310,100);
// floodfill(151,310,WHITE);
// setcolor(YELLOW);

// line(150,40,150,400);


getch();
closegraph();
    return 0;
}
