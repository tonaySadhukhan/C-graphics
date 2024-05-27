#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<time.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm;
int i=0,j=0,k=0,h,m,s,year,month,day;
time_t p;
struct tm*ti;
time(&p);
ti=localtime(&p);
initgraph (&gd,&gm,"C:\\Turboc3\\BGI");
h=(((ti->tm_hour)%12)*5)+45;
m=(ti->tm_min)-15;
s=(ti->tm_sec)-15;
year=ti->tm_year+1900;
month=ti->tm_mon+1;
day=ti->tm_mday;
for(k=h;k<1000;k=k+5)
{
for(j=m;j<60;j++)
{
for(i=45;i<105;i++)
{
cleardevice();

setfillstyle(1,4);
fillellipse(300,230,220,220);
//circle(300,230,200);
//circle(300,230,220);
setfillstyle(1,15);
fillellipse(300,230,200,200);
settextstyle(9,0,1);
outtextxy(280,40,"12");
outtextxy(300,380,"6");
outtextxy(125,220,"9");
outtextxy(470,220,"3");
outtextxy(387,360,"5");
outtextxy(390,70,"1");
outtextxy(150,290,"8");
outtextxy(200,360,"7");
outtextxy(175,70,"11");
outtextxy(440,145,"2");
outtextxy(130,145,"10");
outtextxy(430,300,"4");
outtextxy(248,300,"TONAY");
{
setcolor(GREEN);
setlinestyle(0,0,2);
line(300,230,300+(135*cos(i*0.1047)),230+(135*sin(i*0.1047)));
}
{
setcolor(BLUE);
setlinestyle(0,0,3);
line(300,230,300+(120*cos(k*0.1047)),230+(120*sin(k*0.1047)));
}
{
setcolor(13);
setlinestyle(0,0,1);
line(300,230,300+(130*cos(j*0.1047)),230+(130*sin(j*0.1047)));
}
setfillstyle(1,BLUE);
fillellipse(300,230,10,10);
if(kbhit())
goto p;
delay(1000);
}
}
}
p:
getch();
}
