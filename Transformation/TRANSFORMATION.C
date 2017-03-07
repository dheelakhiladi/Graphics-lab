#include<graphics.h>
#include<stdio.h>
void main()
{
	int gd=DETECT,gm;
	int x0=5,y0=10,x1=10,y1=30,x2=15,y2=35;
	int x01=100,y01=200,x11=300,y11=400,x21=500,y21=450;
	int dx0,dx1,dx2,dy0,dy1,dy2,dx[3],dy[3];
	int j=0,k,x02,y02,x12,y12,x22,y22,a[6];
	float i;
	dx[0]=x01-x0;dx[1]=x11-x1;dx[2]=x21-x2;
	dy[0]=y01-y0;dy[1]=y11-y1;dy[2]=y21-y2;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
       //	line(x01,y01,x11,y11);
       //	line(x11,y11,x21,y21);
       //	line(x01,y01,x21,y21);
	for(i=0;i<10;i+=0.2)
	{
		a[0]=x0+((i)*dx[0]);a[1]=y0+((i)*dy[0]);
		a[2]=x1+((i)*dx[1]);a[3]=y1+((i)*dy[1]);
		a[4]=x2+((i)*dx[2]);a[5]=y2+((i)*dy[2]);
		setcolor(RED);
		delay(50);
	       //	drawpoly(3,a);
	       line(a[0],a[1],a[2],a[3]);
	       line(a[2],a[3],a[4],a[5]);
	       line(a[4],a[5],a[0],a[1]);

	}
	getch();
       //	while(j==0){j=getchar();}
	closegraph();

}
