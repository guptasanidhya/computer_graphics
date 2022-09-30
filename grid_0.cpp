#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main(int argc,char* argv[]){
    int gd=DETECT,gm;
    initwindow(1920,1080,"grid");
    for(int i=0;i<=1000;i++){
        if(i%10==0){
            line(0,i,1000,i);
            line(i,0,i,1000);
        }
    }
    // line(0,0,1000,0);
    // line(0,10,1000,10);
    // line(0,20,1000,20);
    getch();
}