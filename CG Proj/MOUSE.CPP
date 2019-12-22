#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
int xpos,ypos;
union REGS in, out;
/************************************************************************/
 /*                                                                      */
 /*              	     Mouse Related Functions                     */
 /*                                                                      */
 /************************************************************************/

void init_mouse()
{

	in.x.ax = 0;
	int86 (51, &in, &out);

	if (out.x.ax == 0)
	{
		cleardevice();
		cout<<"mouse not installed\n";
		getch();
		exit(1);
	}
       in.x.ax = 1;
       int86 (51, &in ,&out);
}
/*************************************************************/

void get_mouse_posi()
{
	int button,x1,y1;

	in.x.ax = 3;
	int86 (51, &in ,&out);

	button = out.x.bx & 3;
	x1 = out.x.cx;
	y1 = out.x.dx;

	if(out.x.bx)
	{
		xpos = x1 ; ypos = y1;
	}

	if(button == 3)
		exit(0);
}



/*************************************************************/

void hide_mouse()
{
	union REGS ino;
	ino.x.ax=2;
	int86(51,&ino,&ino);
}



/*************************************************************/
void callmouse()
{
	union REGS ino;
	ino.x.ax=1;
	int86(51,&ino,&ino);
}

/*************************************************************/
void remove_mouse()
{
	union REGS ino;
	ino.x.ax=0;
	int86(51,&ino,&ino);
}