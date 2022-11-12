#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
setcolor(WHITE); 
line(100,100,100,200);
line(100,150,150,150);
line(150,100,150,200);
line(200,100,200,200);
 
line(200,100,300,100);
line(200,150,300,150);

line(200,200,300,200);

getch();
closegraph();
    return 0;
}