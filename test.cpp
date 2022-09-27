#include<graphics.h>
#include<stdio.h>
#include<conio.h>

int main(int argc,char* argv[]){

    int gd = DETECT,gm;
    // initgraph(&gd,&gm,(char*)"");
    initwindow(600, 500, "First Sample");
    circle(100,20,50);
    getch();
    closegraph();
    return 0;
}
