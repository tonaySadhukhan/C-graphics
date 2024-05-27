#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
int len=5;
int flag=0;
int p[8][3]={{1,4,7},{2,5,8},{3,6,9},{1,5,9},{3,5,7},{4,5,6},{1,2,3},{7,8,9}};
int cheek_a();
int cheek_b();
void main()
{

int i,a=0,b=0,c,p,d,g,u,j;
int x[5],y[5];
int gd=DETECT,gm;
initgraph (&gd,&gm,"C:\\Turboc3\\BGI");
settextstyle(8,0,2);
outtextxy(1,1,"Tic-Tac-Toe:-");
outtextxy(225,225,"1");
outtextxy(295,225,"2");
outtextxy(375,225,"3");
outtextxy(225,275,"4");
outtextxy(295,275,"5");
outtextxy(375,275,"6");
outtextxy(225,325,"7");
outtextxy(295,325,"8");
outtextxy(375,325,"9");
/*2*/line(200,300,400,300);
/*1*/line(200,250,400,250);
/*3*/line(266,200,266,350);
/*4*/line(334,200,334,350);
aa:
scanf("\t%d",&x[a]);
if(x[a]>0 && x[a]<4)
{
circle(200+x[a]*50,225,15);
}
else if(x[a]>3 && x[a]<7)
{
circle(200+(x[a]-3)*50,275,15);
}
else if(x[a]>6 && x[a]<10)
{
circle(200+(x[a]-6)*50,325,15);
}
else if(x[a]>9)
{
goto ll;
}
a++;
u=cheekwin_a(x,a);
if(u==1)
{
cleardevice();
for(j=0;j<100;j=j+5)
{
setcolor(j);
 circle(300,200,5+j);
 delay(10);
}
outtextxy(150,300," congratulations O wins the game");
}
else
goto bb;

bb:
scanf("\n\t%d",&y[b]);
if (y[b]>0 && y[b]<4)
{
line(144+(y[b]*66),210,190+(y[b]*66),240);
line(190+(y[b]*66),210,144+(y[b]*66),240);
}
else if(y[b]>3 && y[b]<7)
{
line(144+(y[b]-3)*66,260,190+(y[b]-3)*66,290);
line(190+(y[b]-3)*66,260,144+(y[b]-3)*66,290);
}
else if(y[b]>6 && y[b]<9)
{
line(144+(y[b]-6)*66,310,190+(y[b]-6)*66,340);
line(190+(y[b]-6)*66,310,144+(y[b]-6)*66,340);
}
else if(y[b]>9)
{
goto ll;
}
b++;
g=cheekwin_a(y,b);
if(g==1){
cleardevice();
for(j=0;j<100;j=j+5)
{
setcolor(j);
circle(300,200,10+j);
delay(10);
}
outtextxy(150,300," congratulations X wins the game");
}
else
goto aa;
 ll:
getch();
}


int cheekwin_a(int a[],int lim) {
    int w, r, q;
    int p[8][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}, {1, 5, 9}, {3, 5, 7}, {4, 5, 6}, {1, 2, 3}, {7, 8, 9}};

    for (w = 0; w < 8; w++) {
        int hasMatch = 0;
        for (r = 0; r < 3; r++) {
	    for (q = 0; q <lim; q++) {
                if (a[q] == p[w][r]) {
                    hasMatch++;
                }
            }
        }

        if (hasMatch == 3) {
	    flag++;
            break;
        }
    }

    return flag;  // Return the flag value to indicate the result
}
