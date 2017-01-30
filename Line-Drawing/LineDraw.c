#include<graphics.h>

int main(){
	int i,dx,dy,x,y,x0,y0,x1,y1,p;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
	x0=100;x1=200;y0=200;y1=290;
	x=x0;y=y0;
	dx=x1-x0;dy=y0-y1;
	p=((2*dy)-dx);
	for(x=0;x<x1;x++){
		if(p<0){
		p=(p+(2*dy));
		}
		else{
			p=p+((2*dy)-(2*dx));
			y=y+1;
		}
		putpixel(x,y, WHITE );
	}
return 0;
}
