#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 int stangle=180,enangle=0;
 int rhx,rhy,j,i;
 clrscr();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 for(i=0;i<639;i++)
 {
 line(0,350,639,350);
 circle(35+i,280,15);//head
 line(35+i,295,35+i,325);//body
 line(35+i,295,45+i,315);//hand
 line(35+i,298,45+i,315);
 line(45+i,315,60+i,300);//hand
 line(60+i,300,60+i,262);//stick
 if(i%2==0)
 {
 line(35+i,325,20+i,350);//leg
 line(35+i,325,50+i,350);//leg
 delay(100);
 }
 else
 {
 line(35+i,325,35+i,350);
 line(35+i,325,40+i,350);
 delay(100);
 }
 line(20+i,262,100+i,262);
 arc(60+i,262,0,180,40);
 rhx=getmaxx();
 rhy=getmaxy();
 for(j=0;j<350;j++)
 {
 outtextxy(random(rhx),random(rhy-50),"|");
 }
 delay(10);
 cleardevice();
 }
 getch();
 closegraph();
}
