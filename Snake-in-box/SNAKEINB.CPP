#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int main()
{	int gd=DETECT,gm;
	float a=0;
	double x,y;
	initgraph(&gd,&gm,"C:\\TURBOC3\\\BGI");
       //	setbkcolor(WHITE);
	setcolor(1);
	rectangle(100,100,200,200);  //primary rectangles to make a cube
	rectangle(150,150,250,250);
	rectangle(200,100,300,200);
	rectangle(250,150,350,250);
       //	line(200,100,300,100);
       //	line(300,100,300,200);
       //	line(200,200,300,200);
       //	rectangle(100,100,150,250);
       //	rectangle(200,100,250,250);
	line(100,100,150,150);
	line(100,200,150,250);       //line to join corresponding edges to form a cube
	line(200,200,250,250);
	line(200,100,250,150);
	line(125,175,225,175);
	line(300,100,350,150);
	line(300,200,350,250);
	for(x=125;x<325;x++)
	{	y=10*sin(5.45*a*3.141/180); /* Sin wave function from the middle of the BOX*/
		y=175-y;
		setcolor(GREEN);
		line(125,175,325,175);
		putpixel(x,y,WHITE);
		//setbkcolor(CYAN);
		delay(50);
		a+=1;


	}
       /*	for(x=125;x<225;x+=3)
	{	y=10*sin(5*a*3.141/180);
		y=175-y;
	       //	setcolor(CYAN);
		putpixel(x,y,WHITE);
		delay(10);
		a+=3;

	}*/
	getch();
	closegraph();
	return 0;

}