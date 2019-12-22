#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include "ip.cpp"
#include "3dbutton.cpp"
#include "mouse.cpp"
#include<stdlib.h>
#include<string.h>
#include "xn0front.cpp"
char *ipflag="X";
static int cnt=0;
int sum1won=0;
char *playerX="PlayerX",*player0="Player0",*scoreofplayerX="0",*scoreofplayer0="0",*tiegamescore="0";
static wonbyX=0,wonby0=0,tiegame=0;
int flag[3][3]={{0},{0},{0}};
int allfilled=0;
class Xn0:public ip
{
	private:
	int gd,gm;

	public:
	Xn0();
	~Xn0();
	void construct();
	char input();
	void check();
};
Xn0::Xn0()
{
gd=DETECT;
initgraph(&gd,&gm,"D:/TC/BGI");
}
char Xn0::input()
{
char ch;
xpos=ypos=0;
	do
	{
	get_mouse_posi();
	  if (xpos>=170 && xpos<255 && ypos>150 && ypos<195 && flag[0][0]==0)
	  // Condition For 1
	  {
	  hide_mouse();
	  Xn0button_3d(170,150,255,195,"",CLICKED,6);
	  callmouse();
	  delay(250);
	  ch='1';
	  return ch;
	  }
	  if (xpos>270 && xpos<340 && ypos>150 && ypos<190 && flag[0][1]==0)
	  // Condition For 2
	  {
	  hide_mouse();
	  Xn0button_3d(260,150,345,195,"",CLICKED,0);//2
	  callmouse();
	  delay(250);
	  ch='2';
	  return ch;
	  }
	  if (xpos>350 && xpos<430 && ypos>150 && ypos<195 && flag[0][2]==0)
	  // Condition For 3
	  {
	  hide_mouse();
	  Xn0button_3d(350,150,430,195,"",CLICKED,0);
	  callmouse();
	  delay(250);
	  ch='3';
	  return ch;
	  }
	  if (xpos>170 && xpos<255 && ypos>200 && ypos<245 && flag[1][0]==0)
	  // Condition For 4
	  {
	  hide_mouse();
	  Xn0button_3d(170,200,255,245,"",CLICKED,0);
	  callmouse();
	  delay(250);
	  ch='4';
	  return ch;
	  }
	  if (xpos>262 && xpos<345 && ypos>205 && ypos<250 && flag[1][1]==0)
	  // Condition For 5
	  {
	  hide_mouse();
	  Xn0button_3d(260,200,345,245,"",CLICKED,0);
	  callmouse();
	  delay(250);
	  ch='5';
	  return ch;
	  }
	  if (xpos>350 && xpos<430 && ypos>200 && ypos<245 && flag[1][2]==0)
	  // Condition For 6
	  {
	  hide_mouse();
	  Xn0button_3d(350,200,430,245,"",CLICKED,0);
	  callmouse();
	  delay(250);
	  ch='6';
	  return ch;
	  }
	  if (xpos>170 && xpos<255 && ypos>250 && ypos<290 && flag[2][0]==0)
	  // Condition For 7
	  {
	  hide_mouse();
	  Xn0button_3d(170,250,255,290,"",CLICKED,0);
	  callmouse();
	  delay(250);
	  ch='7';
	  return ch;
	  }
	  if (xpos>260 && xpos<345 && ypos>250 && ypos<290 && flag[2][1]==0)
	  // Condition For 8
	  {
	  hide_mouse();
	  Xn0button_3d(260,250,345,290,"",CLICKED,0);
	  callmouse();
	  delay(250);
	  ch='8';
	  return ch;
	  }
	  if (xpos>350 && xpos<430 && ypos>250 && ypos<290 && flag[2][2]==0)
	  // Condition For 9
	  {
	  hide_mouse();
	  Xn0button_3d(350,250,430,290,"",CLICKED,0);//9
	  callmouse();
	  delay(250);
	  ch='9';
	  return ch;
	  }
	  if (xpos>260 && xpos<345 && ypos>300 && ypos<325)
	  // Condition For Reset
	  {
	  hide_mouse();
	  button_3d(260,300,345,325,"Reset",CLICKED,1);
	  callmouse();
	  delay(250);
	  hide_mouse();
	  button_3d(260,300,345,325,"Reset",UNCLICKED,1);
	  callmouse();
	  ch='R';
	  return ch;
	  }
	}while(kbhit()==0);
ch=getch();
return(ch);
}
Xn0::~Xn0()
{}
void Xn0::construct()
{
cleardevice();
settextstyle(4,0,3);
/****************************************************************/
setcolor(6);
for(int xpt=20;xpt<=getmaxx()-20;xpt+=10)
outtextxy(xpt,0,"*");
for(int ypt=0;ypt<=getmaxy()-40;ypt+=10)
outtextxy(getmaxx()-30,ypt,"*");
for(xpt=20;xpt<=getmaxx()-20;xpt+=10)
outtextxy(xpt,getmaxy()-40,"*");
for(ypt=0;ypt<=getmaxy()-40;ypt+=10)
outtextxy(20,ypt,"*");
/**************************************************************/
for(xpt=20;xpt<=getmaxx()-20;xpt+=10)
{if(xpt>=220 && xpt<=420)
{setcolor(1);
outtextxy(xpt,10,"*");}
else
{setcolor(15);
outtextxy(xpt,10,"*");}}
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
for(xpt=20;xpt<=getmaxx()-20;xpt+=10)
outtextxy(xpt,20,"*");
for(ypt=0;ypt<=getmaxy()-40;ypt+=10)
outtextxy(getmaxx()-50,ypt,"*");
for(xpt=20;xpt<=getmaxx()-20;xpt+=10)
outtextxy(xpt,getmaxy()-60,"*");
for(ypt=0;ypt<=getmaxy()-40;ypt+=10)
outtextxy(40,ypt,"*");
/**************************************************************/
Xn0button_3d(170,150,255,195,"",UNCLICKED,0);//1
Xn0button_3d(260,150,345,195,"",UNCLICKED,0);//2
Xn0button_3d(350,150,430,195,"",UNCLICKED,0);//3
Xn0button_3d(170,200,255,245,"",UNCLICKED,0);//4
Xn0button_3d(260,200,345,245,"",UNCLICKED,0);//5
Xn0button_3d(350,200,430,245,"",UNCLICKED,0);//6
Xn0button_3d(170,250,255,290,"",UNCLICKED,0);//7
Xn0button_3d(260,250,345,290,"",UNCLICKED,0);//8
Xn0button_3d(350,250,430,290,"",UNCLICKED,0);//9
button_3d(260,300,345,325,"Reset",UNCLICKED,1);
settextstyle(3,0,4);
setcolor(6);
itoa((::wonbyX),(::scoreofplayerX),10);
outtextxy(205,100,(::playerX));
outtextxy(205+strlen(::playerX)+60,100," : ");
outtextxy(205+strlen(::playerX)+75,100,(::scoreofplayerX));
setcolor(9);
itoa((::wonby0),(::scoreofplayer0),10);
outtextxy(355,100,(::player0));
outtextxy(355+strlen(::player0)+60,100," : ");
outtextxy(355+strlen(::player0)+75,100,(::scoreofplayer0));
settextstyle(3,0,2);
setcolor(10);
itoa((::tiegame),(::tiegamescore),10);
outtextxy(170,300,"Tie Games: ");
outtextxy(170+strlen("Tie Games: ")+55,300,(::tiegamescore));
setcolor(14);
settextstyle(1,0,2);
outtextxy(420,300,"Esc-To Quit");
}
void main()
{
char ip;
frontpage frontpg;
frontpg.front();
Xn0 obj;
obj.construct();
init_mouse();
callmouse();
do
{
if((::cnt)==0 || (::cnt)==2 || ::cnt==4 || ::cnt==6 || ::cnt==8)
ipflag="X";
else if(::cnt==1 || ::cnt==3 || ::cnt==5 || ::cnt==7 || ::cnt==9)
ipflag="0";
/**********************SET X n O after I/p if it fades away due 2 mouse
cursor on it************************************/

/***************************FOR X****************************/
if(flag[0][0]==1)
Xn0button_3d(170,150,255,195,"X",UNCLICKED,0);//1-set X  after i/p

if(flag[0][1]==1)
Xn0button_3d(260,150,345,195,"X",UNCLICKED,0);//2-set X  after i/p

if(flag[0][2]==1)
Xn0button_3d(350,150,430,195,"X",UNCLICKED,0);//3-set X  after i/p

if(flag[1][0]==1)
Xn0button_3d(170,200,255,245,"X",UNCLICKED,0);//4-set X  after i/p

if(flag[1][1]==1)
Xn0button_3d(260,200,345,245,"X",UNCLICKED,0);//5-set X  after i/p

if(flag[1][2]==1)
Xn0button_3d(350,200,430,245,"X",UNCLICKED,0);//6-set X  after i/p

if(flag[2][0]==1)
Xn0button_3d(170,250,255,290,"X",UNCLICKED,0);//7-set X  after i/p

if(flag[2][1]==1)
Xn0button_3d(260,250,345,290,"X",UNCLICKED,0);//8-set X  after i/p

if(flag[2][2]==1)
Xn0button_3d(350,250,430,290,"X",UNCLICKED,0);//9-set X  after i/p

/*******************************FOR 0's**********************************/
if(flag[0][0]==2)
Xn0button_3d(170,150,255,195,"0",UNCLICKED,0);//1-set X  after i/p

if(flag[0][1]==2)
Xn0button_3d(260,150,345,195,"0",UNCLICKED,0);//2-set X  after i/p

if(flag[0][2]==2)
Xn0button_3d(350,150,430,195,"0",UNCLICKED,0);//3-set X  after i/p

if(flag[1][0]==2)
Xn0button_3d(170,200,255,245,"0",UNCLICKED,0);//4-set X  after i/p

if(flag[1][1]==2)
Xn0button_3d(260,200,345,245,"0",UNCLICKED,0);//5-set X  after i/p

if(flag[1][2]==2)
Xn0button_3d(350,200,430,245,"0",UNCLICKED,0);//6-set X  after i/p

if(flag[2][0]==2)
Xn0button_3d(170,250,255,290,"0",UNCLICKED,0);//7-set X  after i/p

if(flag[2][1]==2)
Xn0button_3d(260,250,345,290,"0",UNCLICKED,0);//8-set X  after i/p

if(flag[2][2]==2)
Xn0button_3d(350,250,430,290,"0",UNCLICKED,0);//9-set X  after i/p
/***********************************************************************/
if(flag[0][0]==1 && flag[0][1]==1 && flag[0][2]==1)
{(::wonbyX++);(::sum1won=1);itoa((::wonbyX),(::scoreofplayerX),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][0]==2 && flag[0][1]==2 && flag[0][2]==2)
{(::wonby0++);(::sum1won=1);itoa((::wonby0),(::scoreofplayer0),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[1][0]==1 && flag[1][1]==1 && flag[1][2]==1)
{(::wonbyX++);(::sum1won=1);itoa((::wonbyX),(::scoreofplayerX),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[1][0]==2 && flag[1][1]==2 && flag[1][2]==2)
{(::wonby0++);(::sum1won=1);itoa((::wonby0),(::scoreofplayer0),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[2][0]==1 && flag[2][1]==1 && flag[2][2]==1)
{(::wonbyX++);(::sum1won=1);itoa((::wonbyX),(::scoreofplayerX),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[2][0]==2 && flag[2][1]==2 && flag[2][2]==2)
{(::wonby0++);(::sum1won=1);itoa((::wonby0),(::scoreofplayer0),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][0]==1 && flag[1][0]==1 && flag[2][0]==1)
{(::wonbyX++);(::sum1won=1);itoa((::wonbyX),(::scoreofplayerX),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][0]==2 && flag[1][0]==2 && flag[2][0]==2)
{(::wonby0++);(::sum1won=1);itoa((::wonby0),(::scoreofplayer0),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][1]==1 && flag[1][1]==1 && flag[2][1]==1)
{(::wonbyX++);(::sum1won=1);itoa((::wonbyX),(::scoreofplayerX),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][1]==2 && flag[1][1]==2 && flag[2][1]==2)
{(::wonby0++);(::sum1won=1);itoa((::wonby0),(::scoreofplayer0),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][2]==1 && flag[1][2]==1 && flag[2][2]==1)
{(::wonbyX++);(::sum1won=1);itoa((::wonbyX),(::scoreofplayerX),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][2]==2 && flag[1][2]==2 && flag[2][2]==2)
{(::wonby0++);(::sum1won=1);itoa((::wonby0),(::scoreofplayer0),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][2]==1 && flag[1][1]==1 && flag[2][0]==1)
{(::wonbyX++);(::sum1won=1);itoa((::wonbyX),(::scoreofplayerX),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][2]==2 && flag[1][1]==2 && flag[2][0]==2)
{(::wonby0++);(::sum1won=1);itoa((::wonby0),(::scoreofplayer0),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][0]==1 && flag[1][1]==1 && flag[2][2]==1)
{(::wonbyX++);(::sum1won=1);itoa((::wonbyX),(::scoreofplayerX),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

if(flag[0][0]==2 && flag[1][1]==2 && flag[2][2]==2)
{(::wonby0++);(::sum1won=1);itoa((::wonby0),(::scoreofplayer0),10);
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=3;}}}

ip=obj.input();
if(ip=='1')
{if(strcmp(ipflag,"X")==0)
{flag[0][0]=1;}
else if(strcmp(ipflag,"0")==0)
{flag[0][0]=2;}
Xn0button_3d(170,150,255,195,ipflag,UNCLICKED,0);(::cnt)++;}
else if(ip=='2')
{Xn0button_3d(260,150,345,195,ipflag,UNCLICKED,0);(::cnt)++;
if(strcmp(ipflag,"X")==0)
{flag[0][1]=1;}
else if(strcmp(ipflag,"0")==0)
{flag[0][1]=2;}}
else if(ip=='3')
{Xn0button_3d(350,150,430,195,ipflag,UNCLICKED,0);(::cnt)++;
if(strcmp(ipflag,"X")==0)
{flag[0][2]=1;}
else if(strcmp(ipflag,"0")==0)
{flag[0][2]=2;}}
else if(ip=='4')
{Xn0button_3d(170,200,255,245,ipflag,UNCLICKED,0);(::cnt)++;
if(strcmp(ipflag,"X")==0)
{flag[1][0]=1;}
else if(strcmp(ipflag,"0")==0)
{flag[1][0]=2;}}
else if(ip=='5')
{Xn0button_3d(260,200,345,245,ipflag,UNCLICKED,0);(::cnt)++;
if(strcmp(ipflag,"X")==0)
{flag[1][1]=1;}
else if(strcmp(ipflag,"0")==0)
{flag[1][1]=2;}}
else if(ip=='6')
{Xn0button_3d(350,200,430,245,ipflag,UNCLICKED,0);(::cnt)++;
if(strcmp(ipflag,"X")==0)
{flag[1][2]=1;}
else if(strcmp(ipflag,"0")==0)
{flag[1][2]=2;}}
else if(ip=='7')
{Xn0button_3d(170,250,255,290,ipflag,UNCLICKED,0);(::cnt)++;
if(strcmp(ipflag,"X")==0)
{flag[2][0]=1;}
else if(strcmp(ipflag,"0")==0)
{flag[2][0]=2;}}
else if(ip=='8')
{Xn0button_3d(260,250,345,290,ipflag,UNCLICKED,0);(::cnt)++;
if(strcmp(ipflag,"X")==0)
{flag[2][1]=1;}
else if(strcmp(ipflag,"0")==0)
{flag[2][1]=2;}}
else if(ip=='9')
{Xn0button_3d(350,250,430,290,ipflag,UNCLICKED,0);(::cnt)++;
if(strcmp(ipflag,"X")==0)
{flag[2][2]=1;}
else if(strcmp(ipflag,"0")==0)
{flag[2][2]=2;}}
else if(ip=='R')
{(::cnt)=0;
allfilled=0;
(::sum1won)=0;
obj.construct();
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{flag[i][j]=0;}}
}
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{if(flag[i][j]!=0)
allfilled=1;
else
{allfilled=0;
break;}}}
if((::sum1won)==0 && (::cnt)==9 && allfilled==1)
tiegame++;
}while(ip!=27);
getch();
closegraph();
}
//flag[i][j]=1 if ipflag="X"
//flag[i][j]=2 if ipflag="0"