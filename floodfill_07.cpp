#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void flood(int x,int y,int fillColor, int defaultColor)  
{  
    if(getpixel(x,y)==defaultColor)  
    {  
        delay(1);  
        putpixel(x,y,fillColor);
        flood(x+1,y,fillColor,defaultColor);  
        printf("f1 ");
        cout<<x+1<<","<<y<<endl;
        flood(x-1,y,fillColor,defaultColor);  
        printf("f2 ");
        cout<<x-1<<","<<y<<endl;
        flood(x,y+1,fillColor,defaultColor);  
        printf("f3 ");
        cout<<x<<","<<y+1<<endl;
        flood(x,y-1,fillColor,defaultColor);  
        printf("f4 ");
        cout<<x-1<<","<<y-1<<endl;
    }
    else{
        cout<<"exit point "<<x<<","<<y<<endl;
    }
}  

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
    rectangle(50,50,250,250);  
    flood(51,51,10,0);  

getch();
closegraph();
    return 0;
}