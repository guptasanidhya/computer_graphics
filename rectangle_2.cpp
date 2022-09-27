#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");

rectangle(200,200,150,150);

rectangle(200,200,75,75);
getch();
closegraph();
    return 0;
}
