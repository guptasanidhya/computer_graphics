#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void flood(int x,int y,int fillColor, int defaultColor)  
{  
    if(getpixel(x,y)==defaultColor)  
    {  cout<<x<<","<<y<<endl;
        delay(0.2);  
        putpixel(x,y,fillColor);
        flood(x+1,y,fillColor,defaultColor);  
         
        flood(x,y+1,fillColor,defaultColor);  
        flood(x,y-1,fillColor,defaultColor);  
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