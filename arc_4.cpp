#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
//void arc(int x, int y, int start_angle,int end_angle, int radius);
arc(250,250,155,300,100);

getch();
closegraph();
    return 0;
}
