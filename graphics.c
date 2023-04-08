
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main ()
{
int gdrive=DETECT,gmode,i,x,y;
initgraph(&gdrive,&gmode,"c:\\TURBOC3\\BGI");
rectangle(0,0,630,470);
rectangle(15,15,615,455);
// Loading bar
setcolor(WHITE);
for(i=35;i<=55;i++)
{
line(25+i,170,25+i,200);
}
for(i=35;i<555;i++)
{
setcolor(GREEN);
line(25+i,170,25+i,200);
delay(10);
setcolor(WHITE);
settextstyle(SMALL_FONT,0,16);
outtextxy(220,220,"LOADING");
delay(10);
setcolor(rand()%16);
settextstyle(SMALL_FONT,HORIZ_DIR,16);
outtextxy(390,220,"....");
delay(4);
}

cleardevice();
setcolor(15);
rectangle(0,0,getmaxx(),getmaxy());
rectangle(15,15,615,455);

//menu
settextstyle(0,0,2);
outtextxy(280,100,"MENU");

rectangle(210,140,420,180);
outtextxy(250,150,"Play Game");

rectangle(210,190,420,280);
outtextxy(240,200,"High Score");

rectangle(210,240,420,280);
outtextxy(220,250,"Select Level");
getch();


cleardevice();
setcolor(15);
rectangle(0,0,getmaxx(),getmaxy());
rectangle(15,15,615,455);

//write your character code
rectangle(50,300,6,330);
rectangle(50,340,6,380);
rectangle(0,290,56,300);
rectangle(45,290,8,270);
rectangle(20,400,10,330);
rectangle(46,400,5,380);
rectangle(25,400,5,410);
rectangle(50,400,32,410);
circle(46,305,3);
rectangle(15,330,40,340);
rectangle(20,346,10,365);
rectangle(35,365,10,358);
getch();
closegraph();}

#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main ()
{
int gdrive=DETECT,gmode,i,x,y;
initgraph(&gdrive,&gmode,"c:\\TURBOC3\\BGI");
rectangle(0,0,630,470);
rectangle(15,15,615,455);
// Loading bar
setcolor(WHITE);
for(i=35;i<=55;i++)
{
line(25+i,170,25+i,200);
}
for(i=35;i<555;i++)
{
setcolor(GREEN);
line(25+i,170,25+i,200);
delay(10);
setcolor(WHITE);
settextstyle(SMALL_FONT,0,16);
outtextxy(220,220,"LOADING");
delay(10);
setcolor(rand()%16);
settextstyle(SMALL_FONT,HORIZ_DIR,16);
outtextxy(390,220,"....");
delay(4);
}

cleardevice();
setcolor(15);
rectangle(0,0,getmaxx(),getmaxy());
rectangle(15,15,615,455);

//menu
settextstyle(0,0,2);
outtextxy(280,100,"MENU");

rectangle(210,140,420,180);
outtextxy(250,150,"Play Game");

rectangle(210,190,420,280);
outtextxy(240,200,"High Score");

rectangle(210,240,420,280);
outtextxy(220,250,"Select Level");
getch();


cleardevice();
setcolor(15);
rectangle(0,0,getmaxx(),getmaxy());
rectangle(15,15,615,455);

//write your character code
rectangle(50,300,6,330);
rectangle(50,340,6,380);
rectangle(0,290,56,300);
rectangle(45,290,8,270);
rectangle(20,400,10,330);
rectangle(46,400,5,380);
rectangle(25,400,5,410);
rectangle(50,400,32,410);
circle(46,305,3);
rectangle(15,330,40,340);
rectangle(20,346,10,365);
rectangle(35,365,10,358);
getch();
closegraph();}
