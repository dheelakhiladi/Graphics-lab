#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void linearr(int x0,int y0,int x1,int y1,int t[5][300],int temp)
{ int x,y,dx,dy,p,i,j;
	j=temp;
	x=x0;y=y0;
	dx=x1-x0;dy=y1-y0;
	p=((2*dy)-dx);
	for(x;x<x1;x++){
		if(p<0){
		p=(p+(2*dy));

		}
		else{
			p=p+((2*dy)-(2*dx));
			y=y+1;
		}
		//delay(20);
		t[i][j]=x;
		t[i][j+1]=y;
		i++;
	}

}
void main()
{
	int i,x,y,x0,y0,x1,y1,p,a[5][300],k,l,m,n;
	//int gd=DETECT,gm;
	//initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
	k=100;l=210;m=200;n=300;
	linearr(k,l,m,n,a,0);
	for (i = 0; i < 100; ++i)
	{      putpixel(a[i][0],a[i][1],WHITE);
		printf("%d \n",a[i][0]);
		printf("%d \n",a[i][1]);
	}
getch();
}