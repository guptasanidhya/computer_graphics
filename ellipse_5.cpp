#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
//
// void ellipse(int x, int y, int start_angle, int end_angle, int x_radius, int y_radius);
ellipse(250,250,0,360,200,100);

getch();
closegraph();
    return 0;
}
