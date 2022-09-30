#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    float x0=100;
     float y0=100;
     float xn=500;
     float yn=600;
     float x_old=x0;
     float y_old=y0;
    float x_new=0;
    float y_new=0;
    float m=(yn-y0)/(xn-x0);
    line(x0,y0,x0,y0);
 while(x_new!=xn || y_new!=yn){

     if(m<1){
        x_new=x_old+1;
        y_new=y_old+m;
        line(x_old,y_old,x_new,y_new);
        cout<<x_new<<","<<round(y_new)<<endl;;
        m=(yn-y_new)/(xn-x_new);
        x_old=x_new;
        y_old=y_new;

       
     }

     else if(m>1){

         x_new=x_old+(1/m);
        y_new=y_old+1;
                line(x_old,y_old,x_new,y_new);
        cout<<round(x_new)<<","<<y_new<<endl;
        m=(yn-y_new)/(xn-x_new);
        x_old=x_new;
        y_old=y_new;



     }
    else {
        x_new=x_old+1;
        y_new=y_old+1;
                line(x_old,y_old,x_new,y_new);
        cout<<x_new<<","<<y_new<<endl;
        m=(yn-y_new)/(xn-x_new);
        x_old=x_new;
        y_old=y_new;
    }
}
getch();
return 0;
}