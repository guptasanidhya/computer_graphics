#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {   delay(0.2);
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
    setcolor(7);
    rectangle(50,50,250,250); 
    circle(200,200,40); 
    boundaryFill4(51,51,10,7);  
    return 0;
}