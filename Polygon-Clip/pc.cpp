#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#define round(a) ((int)(a+0.5))
int k;
float xmin,ymin,xmax,ymax,arr[20],m;

void pixel(int xc,int yc,int x,int y);
void main()
{
   int gd=DETECT,gm,xc,yc,r,x,y,Pk;
            clrscr();
            initgraph(&gd,&gm,"c:\\turboc3\\bgi ");
            cout<<"*** Mid-Point Subdivision algorithm of circle ***\n";
            cout<<"Enter the value of Xc\t";
            cin>>xc;
            cout<<"Enter the value of Yc \t";
            cin>>yc;
            cout<<"Enter the Radius of circle\t";
            cin>>r;
            x=0;
            y=r;
            Pk=1-r;
           






    int gdriver=DETECT,gmode,n,poly[20];
    float xi,yi,xf,yf,polyy[20];
    
    
    cout<<"\n\nPolygon to be clipped :\nNumber of sides       :";
    cin>>n;
    cout<<"Enter the coordinates :";
    for(int i=0;i < 2*n;i++)
		cin>>polyy[i];
    polyy[i]=polyy[0];
    polyy[i+1]=polyy[1];
    for(i=0;i < 2*n+2;i++)
		poly[i]=round(polyy[i]);
    initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
    setcolor(RED);
   // rectangle(xmin,ymax,xmax,ymin);
    //cout<<"\t\tUNCLIPPED POLYGON";
    setcolor(WHITE);
    fillpoly(n,poly);
	


 pixel(xc,yc,x,y);
            while(x<y)
            {
                        if(Pk<0)
                        {
                                    x=x+1;
                                    Pk=Pk+(2*x)+1;
                        }
                        else
                        {
                                    x=x+1;
                                    y=y-1;
                                    Pk=Pk+(2*x)-(2*y)+1;
                        }
                        pixel(xc,yc,x,y);
            }
               
   
    getch();
    closegraph();
}


void pixel(int xc,int yc,int x,int y)
{
            putpixel(xc+x,yc+y,7);
            putpixel(xc+y,yc+x,7);
            putpixel(xc-y,yc+x,7);
            putpixel(xc-x,yc+y,7);
            putpixel(xc-x,yc-y,7);
            putpixel(xc-y,yc-x,7);
            putpixel(xc+y,yc-x,7);
            putpixel(xc+x,yc-y,7);
}