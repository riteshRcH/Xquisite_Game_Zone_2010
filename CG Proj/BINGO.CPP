#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include "mouse.cpp"
#include "3dbutton.cpp"
#include "ip.cpp"
#include "frontb.cpp"
int no=0;
int ipnosflag[25];
static int count=0;
int selectnosflag[25];
char inputorder[25];
char *countnos;
int inputnosflag=0;
char bingogame[6]={'\0','\0','\0','\0','\0','\0'};
static int bingocnt=0;
int bingo1[5]={0,0,0,0,0},done1=0;
int bingo2[5]={0,0,0,0,0},done2=0;
int bingo3[5]={0,0,0,0,0},done3=0;
int bingo4[5]={0,0,0,0,0},done4=0;
int bingo5[5]={0,0,0,0,0},done5=0;
int bingo6[5]={0,0,0,0,0},done6=0;
int bingo7[5]={0,0,0,0,0},done7=0;
int bingo8[5]={0,0,0,0,0},done8=0;
int bingo9[5]={0,0,0,0,0},done9=0;
int bingo10[5]={0,0,0,0,0},done10=0;
int bingo11[5]={0,0,0,0,0},done11=0;
int bingo12[5]={0,0,0,0,0},done12=0;
int playerscore=0;
char *score2disp;
void O()
{setcolor(6);
circle(365,54,22);
setfillstyle(1,14);
floodfill(365,54,6);
setcolor(1);
circle(355,49,4);
setfillstyle(1,1);
floodfill(355,49,1);
circle(375,49,4);
floodfill(375,49,1);
setcolor(4);
setfillstyle(1,4);
pieslice(365,59,180,360,10);
floodfill(365,59,4);}
class bingo:public ip
{
	private:
	int gd,gm;

	public:
	bingo();
	void construct();
	char input();
};
bingo::bingo()
{
gd=DETECT;
initgraph(&gd,&gm,"D:/TC/BGI");
}
void bingo::construct()
{
cleardevice();
settextstyle(4,0,3);
/****************************************************************/
setcolor(6);
for(int ypt=0;ypt<=getmaxy()-40;ypt+=10)
outtextxy(getmaxx()-30,ypt,"*");
for(int xpt=20;xpt<=getmaxx()-20;xpt+=10)
outtextxy(xpt,getmaxy()-40,"*");
for(ypt=0;ypt<=getmaxy()-40;ypt+=10)
outtextxy(20,ypt,"*");
/**************************************************************/
for(ypt=0;ypt<=getmaxy()-40;ypt+=10)
{
if(ypt>=130 && ypt<=260)
{setcolor(1);
outtextxy(getmaxx()-40,ypt,"*");}
else
{setcolor(15);
outtextxy(getmaxx()-40,ypt,"*");}}
for(xpt=20;xpt<=getmaxx()-20;xpt+=10)
{if(xpt>=220 && xpt<=420)
{setcolor(1);
outtextxy(xpt,getmaxy()-50,"*");}
else
{setcolor(15);
outtextxy(xpt,getmaxy()-50,"*");}}
for(ypt=0;ypt<=getmaxy()-40;ypt+=10)
{if(ypt>=130 && ypt<=260)
{setcolor(1);
outtextxy(30,ypt,"*");}
else
{setcolor(15);
outtextxy(30,ypt,"*");}}
/**************************************************************/
setcolor(10);
for(ypt=0;ypt<=getmaxy()-40;ypt+=10)
outtextxy(getmaxx()-50,ypt,"*");
for(xpt=20;xpt<=getmaxx()-20;xpt+=10)
outtextxy(xpt,getmaxy()-60,"*");
for(ypt=0;ypt<=getmaxy()-40;ypt+=10)
outtextxy(40,ypt,"*");
/**************************************************************/
button_3d(180,150,208,178,"",UNCLICKED,0);   // 1
button_3d(218,150,246,178,"",UNCLICKED,0);   // 2
button_3d(256,150,284,178,"",UNCLICKED,0);   // 3
button_3d(294,150,322,178,"",UNCLICKED,0);   // 4
button_3d(332,150,360,178,"",UNCLICKED,0);   // 5

button_3d(180,188,208,216,"",UNCLICKED,0);   // 6
button_3d(218,188,246,216,"",UNCLICKED,0);   // 7
button_3d(256,188,284,216,"",UNCLICKED,0);   // 8
button_3d(294,188,322,216,"",UNCLICKED,0);   // 9
button_3d(332,188,360,216,"",UNCLICKED,0);   // 10

button_3d(180,226,208,254,"",UNCLICKED,0);   // 11
button_3d(218,226,246,254,"",UNCLICKED,0);   // 12
button_3d(256,226,284,254,"",UNCLICKED,0);   // 13
button_3d(294,226,322,254,"",UNCLICKED,0);   // 14
button_3d(332,226,360,254,"",UNCLICKED,0);   // 15

button_3d(180,264,208,292,"",UNCLICKED,0);   // 16
button_3d(218,264,246,292,"",UNCLICKED,0);   // 17
button_3d(256,264,284,292,"",UNCLICKED,0);   // 18
button_3d(294,264,322,292,"",UNCLICKED,0);   // 19
button_3d(332,264,360,292,"",UNCLICKED,0);   // 20

button_3d(180,302,208,330,"",UNCLICKED,0);   // 21
button_3d(218,302,246,330,"",UNCLICKED,0);   // 22
button_3d(256,302,284,330,"",UNCLICKED,0);   // 23
button_3d(294,302,322,330,"",UNCLICKED,0);   // 24
button_3d(332,302,360,330,"",UNCLICKED,0);   // 25

button_3d(400,188,525,228,"Input Nos",UNCLICKED,1);   //Input Nos
button_3d(410,238,515,268,"Reset",UNCLICKED,6);       //Reset
button_3d(400,278,525,308,"Play",UNCLICKED,10);       //Play

setcolor(10);
settextstyle(1,0,4);
outtextxy(180,100,"Score:");
itoa(playerscore,score2disp,10);
setcolor(15);
outtextxy(280,100,score2disp);
setcolor(6);
settextstyle(1,0,2);
outtextxy(400,350,"Esc-To Quit");
}
char bingo::input()
{
char ch;
char *buffer;
xpos=ypos=0;
	do
	{
	get_mouse_posi();
	  if (xpos>=400 && xpos<525 && ypos>188 && ypos<228 && inputnosflag==0)
	  // Condition For Input Nos
	  {
	  hide_mouse();
	  button_3d(400,188,525,228,"Input Nos",CLICKED,1);
	  callmouse();
	  delay(250);
	  hide_mouse();
	  button_3d(400,188,525,228,"Input Nos",UNCLICKED,1);
	  callmouse();
	  ch='I';
	  return ch;
	  }
	  if (xpos>=410 && xpos<515 && ypos>238 && ypos<268)
	  // Condition For Reset
	  {
	  hide_mouse();
	  button_3d(410,238,515,268,"Reset",CLICKED,6);
	  callmouse();
	  delay(250);
	  hide_mouse();
	  button_3d(410,238,515,268,"Reset",UNCLICKED,6);
	  callmouse();
	  ch='R';
	  return ch;
	  }
	  if (xpos>=400 && xpos<525 && ypos>278 && ypos<308 && inputnosflag==2)
	  // Condition For Play
	  {
	  hide_mouse();
	  button_3d(400,278,525,308,"Play",CLICKED,10);
	  callmouse();
	  delay(250);
	  hide_mouse();
	  button_3d(400,278,525,308,"Play",UNCLICKED,10);
	  callmouse();
	  ch='P';
	  return ch;
	  }
	  if (xpos>=180 && xpos<208 && ypos>150 && ypos<178 && inputnosflag==1 && ipnosflag[0]==0)
	  // Condition For Input 1
	  {
	  hide_mouse();
	  button_3d(180,150,208,178,"",CLICKED,0);
	  callmouse();
	  ch='a';
	  return ch;
	  }
	  if (xpos>=180 && xpos<208 && ypos>150 && ypos<178 && inputnosflag==2 && ipnosflag[0]==1)
	  // Condition For selectin/markin 1
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(180,150,208,178,buffer,CLICKED,15);
	  callmouse();
	  ch='1';
	  return ch;
	  }
	  if (xpos>=218 && xpos<246 && ypos>150 && ypos<178 && inputnosflag==1 && ipnosflag[1]==0)
	  // Condition For Input 2
	  {
	  hide_mouse();
	  button_3d(218,150,246,178,"",CLICKED,0);
	  callmouse();
	  ch='b';
	  return ch;
	  }
	  if (xpos>=218 && xpos<246 && ypos>150 && ypos<178 && inputnosflag==2 && ipnosflag[1]==1)
	  // Condition For selectin/markin 2
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(218,150,246,178,buffer,CLICKED,15);
	  callmouse();
	  ch='2';
	  return ch;
	  }
	  if (xpos>=256 && xpos<284 && ypos>150 && ypos<178 && inputnosflag==1 && ipnosflag[2]==0)
	  // Condition For Input 3
	  {
	  hide_mouse();
	  button_3d(256,150,284,178,"",CLICKED,0);
	  callmouse();
	  ch='c';
	  return ch;
	  }
	  if (xpos>=256 && xpos<284 && ypos>150 && ypos<178 && inputnosflag==2 && ipnosflag[2]==1)
	  // Condition For selectin/markin 3
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(256,150,284,178,buffer,CLICKED,15);
	  callmouse();
	  ch='3';
	  return ch;
	  }
	  if (xpos>=294 && xpos<322 && ypos>150 && ypos<178 && inputnosflag==1 && ipnosflag[3]==0)
	  // Condition For Input 4
	  {
	  hide_mouse();
	  button_3d(294,150,322,178,"",CLICKED,0);
	  callmouse();
	  ch='d';
	  return ch;
	  }
	  if (xpos>=294 && xpos<322 && ypos>150 && ypos<178 && inputnosflag==2 && ipnosflag[3]==1)
	  // Condition For selectin/markin 4
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(294,150,322,178,buffer,CLICKED,15);
	  callmouse();
	  ch='4';
	  return ch;
	  }
	  if (xpos>=332 && xpos<360 && ypos>150 && ypos<178 && inputnosflag==1 && ipnosflag[4]==0)
	  // Condition For Input 5
	  {
	  hide_mouse();
	  button_3d(332,150,360,178,"",CLICKED,0);
	  callmouse();
	  ch='e';
	  return ch;
	  }
	  if (xpos>=332 && xpos<360 && ypos>150 && ypos<178 && inputnosflag==2 && ipnosflag[4]==1)
	  // Condition For selectin/markin 5
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(332,150,360,178,buffer,CLICKED,15);
	  callmouse();
	  ch='5';
	  return ch;
	  }
	  if (xpos>=180 && xpos<208 && ypos>188 && ypos<216 && inputnosflag==1 && ipnosflag[5]==0)
	  // Condition For Input 6
	  {
	  hide_mouse();
	  button_3d(180,188,208,216,"",CLICKED,0);
	  callmouse();
	  ch='f';
	  return ch;
	  }
	  if (xpos>=180 && xpos<208 && ypos>188 && ypos<216 && inputnosflag==2 && ipnosflag[5]==1)
	  // Condition For selectin/markin 6
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(180,188,208,216,buffer,CLICKED,15);
	  callmouse();
	  ch='6';
	  return ch;
	  }
	  if (xpos>=218 && xpos<246 && ypos>188 && ypos<216 && inputnosflag==1 && ipnosflag[6]==0)
	  // Condition For Input 7
	  {
	  hide_mouse();
	  button_3d(218,188,246,216,"",CLICKED,0);
	  callmouse();
	  ch='g';
	  return ch;
	  }
	  if (xpos>=218 && xpos<246 && ypos>188 && ypos<216 && inputnosflag==2 && ipnosflag[6]==1)
	  // Condition For selectin/markin 7
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(218,188,246,216,buffer,CLICKED,15);
	  callmouse();
	  ch='7';
	  return ch;
	  }
	  if (xpos>=256 && xpos<284 && ypos>188 && ypos<216 && inputnosflag==1 && ipnosflag[7]==0)
	  // Condition For Input 8
	  {
	  hide_mouse();
	  button_3d(256,188,284,216,"",CLICKED,0);
	  callmouse();
	  ch='h';
	  return ch;
	  }
	  if (xpos>=256 && xpos<284 && ypos>188 && ypos<216 && inputnosflag==2 && ipnosflag[7]==1)
	  // Condition For selectin/markin 8
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(256,188,284,216,buffer,CLICKED,15);
	  callmouse();
	  ch='8';
	  return ch;
	  }
	  if (xpos>=294 && xpos<322 && ypos>188 && ypos<216 && inputnosflag==1 && ipnosflag[8]==0)
	  // Condition For Input 9
	  {
	  hide_mouse();
	  button_3d(294,188,322,216,"",CLICKED,0);
	  callmouse();
	  ch='i';
	  return ch;
	  }
	  if (xpos>=294 && xpos<322 && ypos>188 && ypos<216 && inputnosflag==2 && ipnosflag[8]==1)
	  // Condition For selectin/markin 9
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(294,188,322,216,buffer,CLICKED,15);
	  callmouse();
	  ch='9';
	  return ch;
	  }
	  if (xpos>=332 && xpos<360 && ypos>188 && ypos<216 && inputnosflag==1 && ipnosflag[9]==0)
	  // Condition For Input 10
	  {
	  hide_mouse();
	  button_3d(332,188,360,216,"",CLICKED,0);
	  callmouse();
	  ch='j';
	  return ch;
	  }
	  if (xpos>=332 && xpos<360 && ypos>188 && ypos<216 && inputnosflag==2 && ipnosflag[9]==1)
	  // Condition For selectin/markin 10
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(332,188,360,216,buffer,CLICKED,15);
	  callmouse();
	  ch='A';
	  return ch;
	  }
	  if (xpos>=180 && xpos<208 && ypos>226 && ypos<254 && inputnosflag==1 && ipnosflag[10]==0)
	  // Condition For Input 11
	  {
	  hide_mouse();
	  button_3d(180,226,208,254,"",CLICKED,0);
	  callmouse();
	  ch='k';
	  return ch;
	  }
	  if (xpos>=180 && xpos<208 && ypos>226 && ypos<254 && inputnosflag==2 && ipnosflag[10]==1)
	  // Condition For selectin/markin 11
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(180,226,208,254,buffer,CLICKED,15);
	  callmouse();
	  ch='B';
	  return ch;
	  }
	  if (xpos>=218 && xpos<246 && ypos>226 && ypos<254 && inputnosflag==1 && ipnosflag[11]==0)
	  // Condition For Input 12
	  {
	  hide_mouse();
	  button_3d(218,226,246,254,"",CLICKED,0);
	  callmouse();
	  ch='l';
	  return ch;
	  }
	  if (xpos>=218 && xpos<246 && ypos>226 && ypos<254 && inputnosflag==2 && ipnosflag[11]==1)
	  // Condition For selectin/markin 12
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(218,226,246,254,buffer,CLICKED,15);
	  callmouse();
	  ch='C';
	  return ch;
	  }
	  if (xpos>=256 && xpos<284 && ypos>226 && ypos<254 && inputnosflag==1 && ipnosflag[12]==0)
	  // Condition For Input 13
	  {
	  hide_mouse();
	  button_3d(256,226,284,254,"",CLICKED,0);
	  callmouse();
	  ch='m';
	  return ch;
	  }
	  if (xpos>=256 && xpos<284 && ypos>226 && ypos<254 && inputnosflag==2 && ipnosflag[12]==1)
	  // Condition For selectin/markin 13
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(256,226,284,254,buffer,CLICKED,15);
	  callmouse();
	  ch='D';
	  return ch;
	  }
	  if (xpos>=294 && xpos<322 && ypos>226 && ypos<254 && inputnosflag==1 && ipnosflag[13]==0)
	  // Condition For Input 14
	  {
	  hide_mouse();
	  button_3d(294,226,322,254,"",CLICKED,0);
	  callmouse();
	  ch='n';
	  return ch;
	  }
	  if (xpos>=294 && xpos<322 && ypos>226 && ypos<254 && inputnosflag==2 && ipnosflag[13]==1)
	  // Condition For selectin/markin 14
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(294,226,322,254,buffer,CLICKED,15);
	  callmouse();
	  ch='E';
	  return ch;
	  }
	  if (xpos>=332 && xpos<360 && ypos>226 && ypos<254 && inputnosflag==1 && ipnosflag[14]==0)
	  // Condition For Input 15
	  {
	  hide_mouse();
	  button_3d(332,226,360,254,"",CLICKED,0);
	  callmouse();
	  ch='o';
	  return ch;
	  }
	  if (xpos>=332 && xpos<360 && ypos>226 && ypos<254 && inputnosflag==2 && ipnosflag[14]==1)
	  // Condition For selectin/markin 15
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(332,226,360,254,buffer,CLICKED,15);
	  callmouse();
	  ch='F';
	  return ch;
	  }
	  if (xpos>=180 && xpos<208 && ypos>264 && ypos<292 && inputnosflag==1 && ipnosflag[15]==0)
	  // Condition For Input 16
	  {
	  hide_mouse();
	  button_3d(180,264,208,292,"",CLICKED,0);
	  callmouse();
	  ch='p';
	  return ch;
	  }
	  if (xpos>=180 && xpos<208 && ypos>264 && ypos<292 && inputnosflag==2 && ipnosflag[15]==1)
	  // Condition For selectin/markin 16
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(180,264,208,292,buffer,CLICKED,15);
	  callmouse();
	  ch='G';
	  return ch;
	  }
	  if (xpos>=218 && xpos<246 && ypos>264 && ypos<292 && inputnosflag==1 && ipnosflag[16]==0)
	  // Condition For Input 17
	  {
	  hide_mouse();
	  button_3d(218,264,246,292,"",CLICKED,0);
	  callmouse();
	  ch='q';
	  return ch;
	  }
	  if (xpos>=218 && xpos<246 && ypos>264 && ypos<292 && inputnosflag==2 && ipnosflag[16]==1)
	  // Condition For selectin/markin 17
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(218,264,246,292,buffer,CLICKED,15);
	  callmouse();
	  ch='H';
	  return ch;
	  }
	  if (xpos>=256 && xpos<284 && ypos>264 && ypos<292 && inputnosflag==1 && ipnosflag[17]==0)
	  // Condition For Input 18
	  {
	  hide_mouse();
	  button_3d(256,264,284,292,"",CLICKED,0);
	  callmouse();
	  ch='r';
	  return ch;
	  }
	  if (xpos>=256 && xpos<284 && ypos>264 && ypos<292 && inputnosflag==2 && ipnosflag[17]==1)
	  // Condition For selectin/markin 18
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(256,264,284,292,buffer,CLICKED,15);
	  callmouse();
	  ch='S';
	  return ch;
	  }
	  if (xpos>=294 && xpos<322 && ypos>264 && ypos<292 && inputnosflag==1 && ipnosflag[18]==0)
	  // Condition For Input 19
	  {
	  hide_mouse();
	  button_3d(294,264,322,292,"",CLICKED,0);
	  callmouse();
	  ch='s';
	  return ch;
	  }
	  if (xpos>=294 && xpos<322 && ypos>264 && ypos<292 && inputnosflag==2 && ipnosflag[18]==1)
	  // Condition For selectin/markin 19
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(294,264,322,292,buffer,CLICKED,15);
	  callmouse();
	  ch='J';
	  return ch;
	  }
	  if (xpos>=332 && xpos<360 && ypos>264 && ypos<292 && inputnosflag==1 && ipnosflag[19]==0)
	  // Condition For Input 20
	  {
	  hide_mouse();
	  button_3d(332,264,360,292,"",CLICKED,0);
	  callmouse();
	  ch='t';
	  return ch;
	  }
	  if (xpos>=332 && xpos<360 && ypos>264 && ypos<292 && inputnosflag==2 && ipnosflag[19]==1)
	  // Condition For selectin/markin 20
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(332,264,360,292,buffer,CLICKED,15);
	  callmouse();
	  ch='K';
	  return ch;
	  }
	  if (xpos>=180 && xpos<208 && ypos>302 && ypos<330 && inputnosflag==1 && ipnosflag[20]==0)
	  // Condition For Input 21
	  {
	  hide_mouse();
	  button_3d(180,302,208,330,"",CLICKED,0);
	  callmouse();
	  ch='u';
	  return ch;
	  }
	  if (xpos>=180 && xpos<208 && ypos>302 && ypos<330 && inputnosflag==2 && ipnosflag[20]==1)
	  // Condition For selectin/markin 21
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(180,302,208,330,buffer,CLICKED,15);
	  callmouse();
	  ch='L';
	  return ch;
	  }
	  if (xpos>=218 && xpos<246 && ypos>302 && ypos<330 && inputnosflag==1 && ipnosflag[21]==0)
	  // Condition For Input 22
	  {
	  hide_mouse();
	  button_3d(218,302,246,330,"",CLICKED,0);
	  callmouse();
	  ch='v';
	  return ch;
	  }
	  if (xpos>=218 && xpos<246 && ypos>302 && ypos<330 && inputnosflag==2 && ipnosflag[21]==1)
	  // Condition For selectin/markin 22
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(218,302,246,330,buffer,CLICKED,15);
	  callmouse();
	  ch='M';
	  return ch;
	  }
	  if (xpos>=256 && xpos<284 && ypos>302 && ypos<330 && inputnosflag==1 && ipnosflag[22]==0)
	  // Condition For Input 23
	  {
	  hide_mouse();
	  button_3d(256,302,284,330,"",CLICKED,0);
	  callmouse();
	  ch='w';
	  return ch;
	  }
	  if (xpos>=256 && xpos<284 && ypos>302 && ypos<330 && inputnosflag==2 && ipnosflag[22]==1)
	  // Condition For selectin/markin 23
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(256,302,284,330,buffer,CLICKED,15);
	  callmouse();
	  ch='N';
	  return ch;
	  }
	  if (xpos>=294 && xpos<322 && ypos>302 && ypos<330 && inputnosflag==1 && ipnosflag[23]==0)
	  // Condition For Input 24
	  {
	  hide_mouse();
	  button_3d(294,302,322,330,"",CLICKED,0);
	  callmouse();
	  ch='x';
	  return ch;
	  }
	  if (xpos>=294 && xpos<322 && ypos>302 && ypos<330 && inputnosflag==2 && ipnosflag[23]==1)
	  // Condition For selectin/markin 24
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(294,302,322,330,buffer,CLICKED,15);
	  callmouse();
	  ch='O';
	  return ch;
	  }
	  if (xpos>=332 && xpos<360 && ypos>302 && ypos<330 && inputnosflag==1 && ipnosflag[24]==0)
	  // Condition For Input 25
	  {
	  hide_mouse();
	  button_3d(332,302,360,330,"",CLICKED,0);
	  callmouse();
	  ch='y';
	  return ch;
	  }
	  if (xpos>=332 && xpos<360 && ypos>302 && ypos<330 && inputnosflag==2 && ipnosflag[24]==1)
	  // Condition For selectin/markin 25
	  {
	  hide_mouse();
	  itoa(::no,buffer,10);
	  button_3d(332,302,360,330,buffer,CLICKED,15);
	  callmouse();
	  ch='Q';
	  return ch;
	  }
}while(kbhit()==0);
ch=getch();
return(ch);
}
void playthegameofbingo()
{
for(int i=0;i<25;i++)
ipnosflag[i]=0;
char ip;
int doneincrementinscore=0;
frontpage frontpg;
frontpg.front();
bingo obj;
obj.construct();
init_mouse();
callmouse();
do
{
if(bingocnt==5 && doneincrementinscore==0)
{(::playerscore)=(::playerscore)+1;doneincrementinscore=1;}
if(selectnosflag[0]==1 && selectnosflag[1]==1 && selectnosflag[2]==1 && selectnosflag[3]==1 && selectnosflag[4]==1 && done1==0)
{
settextstyle(4,0,7);
if(bingocnt==0 && bingo1[0]==0 && bingo1[1]==0 && bingo1[2]==0 && bingo1[3]==0 && bingo1[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo1[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo1[0]==0 && bingo1[1]==0 && bingo1[2]==0 && bingo1[3]==0 && bingo1[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo1[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo1[0]==0 && bingo1[1]==0 && bingo1[2]==0 && bingo1[3]==0 && bingo1[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo1[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo1[0]==0 && bingo1[1]==0 && bingo1[2]==0 && bingo1[3]==0 && bingo1[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo1[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo1[0]==0 && bingo1[1]==0 && bingo1[2]==0 && bingo1[3]==0 && bingo1[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo1[4]=1;
bingogame[5]='O';}
bingocnt++;
done1=1;
}
/*******************************************************************/
else if(selectnosflag[5]==1 && selectnosflag[6]==1 && selectnosflag[7]==1 && selectnosflag[8]==1 && selectnosflag[9]==1 && done2==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo2[0]==0 && bingo2[1]==0 && bingo2[2]==0 && bingo2[3]==0 && bingo2[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo2[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo2[0]==0 && bingo2[1]==0 && bingo2[2]==0 && bingo2[3]==0 && bingo2[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo2[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo2[0]==0 && bingo2[1]==0 && bingo2[2]==0 && bingo2[3]==0 && bingo2[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo2[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo2[0]==0 && bingo2[1]==0 && bingo2[2]==0 && bingo2[3]==0 && bingo2[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo2[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo2[0]==0 && bingo2[1]==0 && bingo2[2]==0 && bingo2[3]==0 && bingo2[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo2[4]=1;
bingogame[5]='O';}
bingocnt++;done2=1;}
/*****************************************************************/
else if(selectnosflag[10]==1 && selectnosflag[11]==1 && selectnosflag[12]==1 && selectnosflag[13]==1 && selectnosflag[14]==1 && done3==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo3[0]==0 && bingo3[1]==0 && bingo3[2]==0 && bingo3[3]==0 && bingo3[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo2[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo3[0]==0 && bingo3[1]==0 && bingo3[2]==0 && bingo3[3]==0 && bingo3[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo3[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo3[0]==0 && bingo3[1]==0 && bingo3[2]==0 && bingo3[3]==0 && bingo3[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo3[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo3[0]==0 && bingo3[1]==0 && bingo3[2]==0 && bingo3[3]==0 && bingo3[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo3[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo3[0]==0 && bingo3[1]==0 && bingo3[2]==0 && bingo3[3]==0 && bingo3[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo3[4]=1;
bingogame[5]='O';}
bingocnt++;done3=1;}
/*****************************************************************/
else if(selectnosflag[15]==1 && selectnosflag[16]==1 && selectnosflag[17]==1 && selectnosflag[18]==1 && selectnosflag[19]==1 && done4==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo4[0]==0 && bingo4[1]==0 && bingo4[2]==0 && bingo4[3]==0 && bingo4[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo4[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo4[0]==0 && bingo4[1]==0 && bingo4[2]==0 && bingo4[3]==0 && bingo4[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo4[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo4[0]==0 && bingo4[1]==0 && bingo4[2]==0 && bingo4[3]==0 && bingo4[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo4[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo4[0]==0 && bingo4[1]==0 && bingo4[2]==0 && bingo4[3]==0 && bingo4[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo4[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo4[0]==0 && bingo4[1]==0 && bingo4[2]==0 && bingo4[3]==0 && bingo4[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo4[4]=1;
bingogame[5]='O';}
bingocnt++;done4=1;}
/*****************************************************************/
else if(selectnosflag[20]==1 && selectnosflag[21]==1 && selectnosflag[22]==1 && selectnosflag[23]==1 && selectnosflag[24]==1 && done5==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo5[0]==0 && bingo5[1]==0 && bingo5[2]==0 && bingo5[3]==0 && bingo5[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo5[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo5[0]==0 && bingo5[1]==0 && bingo5[2]==0 && bingo5[3]==0 && bingo5[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo5[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo5[0]==0 && bingo5[1]==0 && bingo5[2]==0 && bingo5[3]==0 && bingo5[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo5[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo5[0]==0 && bingo5[1]==0 && bingo5[2]==0 && bingo5[3]==0 && bingo5[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo5[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo5[0]==0 && bingo5[1]==0 && bingo5[2]==0 && bingo5[3]==0 && bingo5[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo5[4]=1;
bingogame[5]='O';}
bingocnt++;done5=1;}
/*****************************************************************/
else if(selectnosflag[0]==1 && selectnosflag[5]==1 && selectnosflag[10]==1 && selectnosflag[15]==1 && selectnosflag[20]==1 && done6==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo6[0]==0 && bingo6[1]==0 && bingo6[2]==0 && bingo6[3]==0 && bingo6[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo6[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo6[0]==0 && bingo6[1]==0 && bingo6[2]==0 && bingo6[3]==0 && bingo6[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo6[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo6[0]==0 && bingo6[1]==0 && bingo6[2]==0 && bingo6[3]==0 && bingo6[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo6[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo6[0]==0 && bingo6[1]==0 && bingo6[2]==0 && bingo6[3]==0 && bingo6[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo6[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo6[0]==0 && bingo6[1]==0 && bingo6[2]==0 && bingo6[3]==0 && bingo6[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo6[4]=1;
bingogame[5]='O';}
bingocnt++;done6=1;}
/*****************************************************************/
else if(selectnosflag[1]==1 && selectnosflag[6]==1 && selectnosflag[11]==1 && selectnosflag[16]==1 && selectnosflag[21]==1 && done7==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo7[0]==0 && bingo7[1]==0 && bingo7[2]==0 && bingo7[3]==0 && bingo7[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo7[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo7[0]==0 && bingo7[1]==0 && bingo7[2]==0 && bingo7[3]==0 && bingo7[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo7[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo7[0]==0 && bingo7[1]==0 && bingo7[2]==0 && bingo7[3]==0 && bingo7[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo7[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo7[0]==0 && bingo7[1]==0 && bingo7[2]==0 && bingo7[3]==0 && bingo7[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo7[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo7[0]==0 && bingo7[1]==0 && bingo7[2]==0 && bingo7[3]==0 && bingo7[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo7[4]=1;
bingogame[5]='O';}
bingocnt++;done7=1;}
/*****************************************************************/
else if(selectnosflag[2]==1 && selectnosflag[7]==1 && selectnosflag[12]==1 && selectnosflag[17]==1 && selectnosflag[22]==1 && done8==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo8[0]==0 && bingo8[1]==0 && bingo8[2]==0 && bingo8[3]==0 && bingo8[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo8[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo8[0]==0 && bingo8[1]==0 && bingo8[2]==0 && bingo8[3]==0 && bingo8[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo8[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo8[0]==0 && bingo8[1]==0 && bingo8[2]==0 && bingo8[3]==0 && bingo8[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo8[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo8[0]==0 && bingo8[1]==0 && bingo8[2]==0 && bingo8[3]==0 && bingo8[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo8[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo8[0]==0 && bingo8[1]==0 && bingo8[2]==0 && bingo8[3]==0 && bingo8[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo8[4]=1;
bingogame[5]='O';}
bingocnt++;done8=1;}
/*****************************************************************/
else if(selectnosflag[3]==1 && selectnosflag[8]==1 && selectnosflag[13]==1 && selectnosflag[18]==1 && selectnosflag[23]==1 && done9==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo9[0]==0 && bingo9[1]==0 && bingo9[2]==0 && bingo9[3]==0 && bingo9[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo9[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo9[0]==0 && bingo9[1]==0 && bingo9[2]==0 && bingo9[3]==0 && bingo9[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo9[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo9[0]==0 && bingo9[1]==0 && bingo9[2]==0 && bingo9[3]==0 && bingo9[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo9[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo9[0]==0 && bingo9[1]==0 && bingo9[2]==0 && bingo9[3]==0 && bingo9[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo9[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo9[0]==0 && bingo9[1]==0 && bingo9[2]==0 && bingo9[3]==0 && bingo9[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo9[4]=1;
bingogame[5]='O';}
bingocnt++;done9=1;}
/*****************************************************************/
else if(selectnosflag[4]==1 && selectnosflag[9]==1 && selectnosflag[14]==1 && selectnosflag[19]==1 && selectnosflag[24]==1 && done10==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo10[0]==0 && bingo10[1]==0 && bingo10[2]==0 && bingo10[3]==0 && bingo10[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo10[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo10[0]==0 && bingo10[1]==0 && bingo10[2]==0 && bingo10[3]==0 && bingo10[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo10[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo10[0]==0 && bingo10[1]==0 && bingo10[2]==0 && bingo10[3]==0 && bingo10[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo10[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo10[0]==0 && bingo10[1]==0 && bingo10[2]==0 && bingo10[3]==0 && bingo10[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo10[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo10[0]==0 && bingo10[1]==0 && bingo10[2]==0 && bingo10[3]==0 && bingo10[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo10[4]=1;
bingogame[5]='O';}
bingocnt++;done10=1;}
/*****************************************************************/
else if(selectnosflag[0]==1 && selectnosflag[6]==1 && selectnosflag[12]==1 && selectnosflag[18]==1 && selectnosflag[24]==1 && done11==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo11[0]==0 && bingo11[1]==0 && bingo11[2]==0 && bingo11[3]==0 && bingo11[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo11[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo11[0]==0 && bingo11[1]==0 && bingo11[2]==0 && bingo11[3]==0 && bingo11[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo11[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo11[0]==0 && bingo11[1]==0 && bingo11[2]==0 && bingo11[3]==0 && bingo11[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo11[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo11[0]==0 && bingo11[1]==0 && bingo11[2]==0 && bingo11[3]==0 && bingo11[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo11[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo11[0]==0 && bingo11[1]==0 && bingo11[2]==0 && bingo11[3]==0 && bingo11[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo11[4]=1;
bingogame[5]='O';}
bingocnt++;done11=1;}
/*****************************************************************/
else if(selectnosflag[4]==1 && selectnosflag[8]==1 && selectnosflag[12]==1 && selectnosflag[16]==1 && selectnosflag[20]==1 && done12==0)
{settextstyle(4,0,7);
if(bingocnt==0 && bingo12[0]==0 && bingo12[1]==0 && bingo12[2]==0 && bingo12[3]==0 && bingo12[4]==0)
{setcolor(6);
outtextxy(120,45,"B");
bingo12[0]=1;
bingogame[0]='B';}

else if(bingocnt==1 && bingo12[0]==0 && bingo12[1]==0 && bingo12[2]==0 && bingo12[3]==0 && bingo12[4]==0)
{setcolor(15);
outtextxy(180,45,"I");
bingo12[1]=1;
bingogame[2]='I';}

else if(bingocnt==2 && bingo12[0]==0 && bingo12[1]==0 && bingo12[2]==0 && bingo12[3]==0 && bingo12[4]==0)
{setcolor(10);
outtextxy(240,45,"N");
bingo12[2]=1;
bingogame[3]='N';}

else if(bingocnt==3 && bingo12[0]==0 && bingo12[1]==0 && bingo12[2]==0 && bingo12[3]==0 && bingo12[4]==0)
{setcolor(1);
outtextxy(300,45,"G");
bingo12[3]=1;
bingogame[4]='G';}

else if(bingocnt==4 && bingo12[0]==0 && bingo12[1]==0 && bingo12[2]==0 && bingo12[3]==0 && bingo12[4]==0)
{//setcolor(14);
//outtextxy(360,45,"O");
O();
bingo12[4]=1;
bingogame[5]='O';}
bingocnt++;done12=1;}
/*****************************************************************/
ip=obj.input();
inputorder[count]=char(ip);
if(ip=='1')
{selectnosflag[0]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='a')
{(::no)=(i+1);break;}}}
if(ip=='2')
{selectnosflag[1]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='b')
{(::no)=(i+1);break;}}}
if(ip=='3')
{selectnosflag[2]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='c')
{(::no)=(i+1);break;}}}
if(ip=='4')
{selectnosflag[3]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='d')
{(::no)=(i+1);break;}}}
if(ip=='5')
{selectnosflag[4]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='e')
{(::no)=(i+1);break;}}}
if(ip=='6')
{selectnosflag[5]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='f')
{(::no)=(i+1);break;}}}
if(ip=='7')
{selectnosflag[6]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='g')
{(::no)=(i+1);break;}}}
if(ip=='8')
{selectnosflag[7]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='h')
{(::no)=(i+1);break;}}}
if(ip=='9')
{selectnosflag[8]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='i')
{(::no)=(i+1);break;}}}
if(ip=='A')
{selectnosflag[9]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='j')
{(::no)=(i+1);break;}}}
if(ip=='B')
{selectnosflag[10]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='k')
{(::no)=(i+1);break;}}}
if(ip=='C')
{selectnosflag[11]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='l')
{(::no)=(i+1);break;}}}
if(ip=='D')
{selectnosflag[12]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='m')
{(::no)=(i+1);break;}}}
if(ip=='E')
{selectnosflag[13]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='n')
{(::no)=(i+1);break;}}}
if(ip=='F')
{selectnosflag[14]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='o')
{(::no)=(i+1);break;}}}
if(ip=='G')
{selectnosflag[15]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='p')
{(::no)=(i+1);break;}}}
if(ip=='H')
{selectnosflag[16]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='q')
{(::no)=(i+1);break;}}}
if(ip=='S')
{selectnosflag[17]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='r')
{(::no)=(i+1);break;}}}
if(ip=='J')
{selectnosflag[18]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='s')
{(::no)=(i+1);break;}}}
if(ip=='K')
{selectnosflag[19]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='t')
{(::no)=(i+1);break;}}}
if(ip=='L')
{selectnosflag[20]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='u')
{(::no)=(i+1);break;}}}
if(ip=='M')
{selectnosflag[21]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='v')
{(::no)=(i+1);break;}}}
if(ip=='N')
{selectnosflag[22]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='w')
{(::no)=(i+1);break;}}}
if(ip=='O')
{selectnosflag[23]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='x')
{(::no)=(i+1);break;}}}
if(ip=='Q')
{selectnosflag[24]=1;
for(int i=0;i<25;i++)
{if(inputorder[i]=='y')
{(::no)=(i+1);break;}}}
if(ip=='I')
{inputnosflag=1;continue;}
if(ip=='a')
{count++;
ipnosflag[0]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(180,150,208,178,countnos,UNCLICKED,6);
callmouse();}
if(ip=='b')
{count++;
ipnosflag[1]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(218,150,246,178,countnos,UNCLICKED,1);
callmouse();}
if(ip=='c')
{count++;
ipnosflag[2]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(256,150,284,178,countnos,UNCLICKED,0);
callmouse();}
if(ip=='d')
{count++;
ipnosflag[3]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(294,150,322,178,countnos,UNCLICKED,9);
callmouse();}
if(ip=='e')
{count++;
ipnosflag[4]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(332,150,360,178,countnos,UNCLICKED,2);
callmouse();}
if(ip=='f')
{count++;
ipnosflag[5]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(180,188,208,216,countnos,UNCLICKED,4);
callmouse();}
if(ip=='g')
{count++;
ipnosflag[6]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(218,188,246,216,countnos,UNCLICKED,5);
callmouse();}
if(ip=='h')
{count++;
ipnosflag[7]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(256,188,284,216,countnos,UNCLICKED,10);
callmouse();}
if(ip=='i')
{count++;
ipnosflag[8]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(294,188,322,216,countnos,UNCLICKED,11);
callmouse();}
if(ip=='j')
{count++;
ipnosflag[9]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(332,188,360,216,countnos,UNCLICKED,12);
callmouse();}
if(ip=='k')
{count++;
ipnosflag[10]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(180,226,208,254,countnos,UNCLICKED,13);
callmouse();}
if(ip=='l')
{count++;
ipnosflag[11]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(218,226,246,254,countnos,UNCLICKED,14);
callmouse();}
if(ip=='m')
{count++;
ipnosflag[12]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(256,226,284,254,countnos,UNCLICKED,0);
callmouse();}
if(ip=='n')
{count++;
ipnosflag[13]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(294,226,322,254,countnos,UNCLICKED,1);
callmouse();}
if(ip=='o')
{count++;
ipnosflag[14]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(332,226,360,254,countnos,UNCLICKED,2);
callmouse();}
if(ip=='p')
{count++;
ipnosflag[15]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(180,264,208,292,countnos,UNCLICKED,4);
callmouse();}
if(ip=='q')
{count++;
ipnosflag[16]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(218,264,246,292,countnos,UNCLICKED,5);
callmouse();}
if(ip=='r')
{count++;
ipnosflag[17]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(256,264,284,292,countnos,UNCLICKED,6);
callmouse();}
if(ip=='s')
{count++;
ipnosflag[18]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(294,264,322,292,countnos,UNCLICKED,9);
callmouse();}
if(ip=='t')
{count++;
ipnosflag[19]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(332,264,360,292,countnos,UNCLICKED,10);
callmouse();}
if(ip=='u')
{count++;
ipnosflag[20]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(180,302,208,330,countnos,UNCLICKED,14);
callmouse();}
if(ip=='v')
{count++;
ipnosflag[21]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(218,302,246,330,countnos,UNCLICKED,12);
callmouse();}
if(ip=='w')
{count++;
ipnosflag[22]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(256,302,284,330,countnos,UNCLICKED,13);
callmouse();}
if(ip=='x')
{count++;
ipnosflag[23]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(294,302,322,330,countnos,UNCLICKED,11);
callmouse();}
if(ip=='y')
{count++;
ipnosflag[24]=1;
delay(250);
hide_mouse();
itoa(count,countnos,10);
button_3d(332,302,360,330,countnos,UNCLICKED,10);
callmouse();}
if(count==25)
{inputnosflag=2;}
if(ip=='R')
{count=0;
done1=0;done2=0;done3=0;done4=0;done5=0;done6=0;
done7=0;done8=0;done9=0;done10=0;done11=0;done12=0;
for(int b=0;b<5;b++)
{bingo1[b]=0;bingo2[b]=0;bingo3[b]=0;bingo4[b]=0;bingo5[b]=0;bingo6[b]=0;
bingo7[b]=0;bingo8[b]=0;bingo9[b]=0;bingo10[b]=0;bingo11[b]=0;bingo12[b]=0;}
bingogame[0]='\0';
bingogame[1]='\0';
bingogame[2]='\0';
bingogame[3]='\0';
bingogame[4]='\0';
bingogame[5]='\0';
bingocnt=0;
doneincrementinscore=0;
obj.construct();
inputnosflag=0;
for(i=0;i<25;i++)
{selectnosflag[i]=0;ipnosflag[i]=0;}}
}while(ip!=27);
getch();
closegraph();
}
void main()
{
	bingo b;
	b.construct();
}