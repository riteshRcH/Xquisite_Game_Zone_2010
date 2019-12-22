#include<graphics.h>
#include<conio.h>
#include<string.h>
//up-upper color,low-lower color
//15-white,8-grey
//gud fonts:1,3,4(best),5(2nd best),7(3rd best),10
#define UNCLICKED 0
#define CLICKED 1
void button_3d(int x1,int y1,int x2,int y2,char *text,int check,int color)
{
int up,low;
setfillstyle(1,7);
bar(x1,y1,x2,y2);

if(check==0)
up=15,low=8;
else
up=8,low=15;

setlinestyle(0,1,2);

setcolor(up);
line(x1,y1,x2,y1);
line(x1+1,y1,x1+1,y2-2);
line(x1,y1,x1,y2);
line(x1,y1+1,x2-2,y1+1);

setcolor(low);
line(x2,y1,x2,y2);
line(x1+1,y2-1,x2,y2-1);
line(x2-1,y1+1,x2-1,y2-2);
line(x1,y2,x2,y2);

if(strcmp(text,"Sin")==0||strcmp(text,"Cos")==0||strcmp(text,"Tan")==0)
{setcolor(color);
settextstyle(2,0,5);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x1+(x2 - x1)/2,(y1+(y2 - y1)/2)-2, text);}
else if(strcmp(text,"Cos^-1")==0||strcmp(text,"Sin^-1")==0||strcmp(text,"Tan^-1")==0)
{setcolor(color);
settextstyle(2,0,4);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x1+(x2 - x1)/2,(y1+(y2 - y1)/2)-2, text);}
else if(strcmp(text,"sqrt")==0||strcmp(text,"inv")==0)
{setcolor(color);
settextstyle(2,0,4);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x1+(x2 - x1)/2,(y1+(y2 - y1)/2)-2, text);}
else if(strcmp(text,"Input Nos")==0)
{setcolor(color);
settextstyle(7,0,1);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x1+(x2 - x1)/2,(y1+(y2 - y1)/2)-2, text);}
else if(strcmp(text,"Reset")==0)
{setcolor(color);
settextstyle(3,0,1);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x1+(x2 - x1)/2,(y1+(y2 - y1)/2)-2, text);}
else
{setcolor(color);
settextstyle(2,0,6);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x1+(x2 - x1)/2,(y1+(y2 - y1)/2)-2, text);}
}
void Xn0button_3d(int x1,int y1,int x2,int y2,char *text,int check,int color)
{
int up,low;
setfillstyle(1,7);
bar(x1,y1,x2,y2);

if(check==0)
up=15,low=8;
else
up=8,low=15;

setlinestyle(0,1,2);

setcolor(up);
line(x1,y1,x2,y1);
line(x1+1,y1,x1+1,y2-2);
line(x1,y1,x1,y2);
line(x1,y1+1,x2-2,y1+1);

setcolor(low);
line(x2,y1,x2,y2);
line(x1+1,y2-1,x2,y2-1);
line(x2-1,y1+1,x2-1,y2-2);
line(x1,y2,x2,y2);

setcolor(color);
if(strcmp(text,"X")==0)
{setcolor(6);
settextstyle(2,0,7);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x1+(x2 - x1)/2,(y1+(y2 - y1)/2)-2, text);}
else if(strcmp(text,"0")==0)
{setcolor(9);
settextstyle(2,0,7);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x1+(x2 - x1)/2,(y1+(y2 - y1)/2)-2, text);}
}
/*void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"D:/TC/BGI");
button_3d(350,205,380,225,"Sin",UNCLICKED,15);
getch();
} */