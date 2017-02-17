#include<graphics.h>
#include<conio.h>
/*int mdpt(int a1,int b1){
return (b1+a1)/2;
}
int rec(int i,int j,int k,int l){
int d=0,e=0;
mdpt(i,k);
mdpt(j,l);
if(i==d&&j==e || k==d&&l==e){
//line(100,200,400,200);
return 0;
}
else{
putpixel(d,e,WHITE);
rec(i,j,d,e);
rec(d,e,k,l);
}
return 0;
} */
void main(){
int x0=100,y0=200,x1=400,f,y1=300,a,b,c,m,n,o,p,q,r,s,t;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
f=x1;s=y1;
t=x0;o=y0;
for(a=0;a<300;a++)
{
f=(x0+f)/2;
t=(x1+t)/2;
s=(y0+s)/2;
o=(y1+o)/2;
delay(20);
putpixel(t,o,WHITE);
putpixel(f,s,WHITE);
}
//f=(x1+x0)/2;
//s=(y0+y1)/2;
//putpixel(f,s,WHITE);
//putpixel(100,200,WHITE);
//putpixel(400,300,WHITE);

//rec(x0,y0,x1,y1);
getch();
}