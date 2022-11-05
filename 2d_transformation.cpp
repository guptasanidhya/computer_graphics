#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

void translate(int tx,int ty){
    delay(2000);
    cleardevice();
    setcolor(3);
    line(100+tx,100+ty,200+tx,200+ty);
}

void rotation(double a){
delay(2000);
// cleardevice();
// setcolor(3);
// a=((a*3.14))/180;
// // long x_new=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
//  long x_new=200+((300-200)*cos(a)-(300-200)*sin(a));
// //  long y_new=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
//   long y_new=300+((300-200)*sin(a)+(300-200)*cos(a));
//   cout<<x_new<<","<<y_new<<endl;
//   setcolor(5);
//   rectangle(200,200,x_new,y_new);

}
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");  

// line(100,100,200,200);
// translate(200,20);

rotation(30);
getch();
closegraph();
    return 0;
}