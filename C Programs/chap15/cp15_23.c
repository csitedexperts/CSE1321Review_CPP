/* 	CP15_23.C	*/
/* 	Creating New Fonts */ 
/*  	Please use DOS based TC compiler */

#include<graphics.h>
#include<stdio.h>
#include<conio.h>

ma(int x,int y);
sa(int,int);
na(int,int);
ca(int,int);
int x,y;

int main()
{
int gd=DETECT;
int gm,MH=0,MM=0;

char ch='1';
clrscr();

initgraph(&gd,&gm,"c:\\tc\\bgi");

printf("Enter your option (C for ch, M for ma, N for na, S for sa)");
printf("\nEsc to exit : ");
gotoxy(6, 1);

while(ch!='0')
 {
   ch=getch();
   if((int)(ch)==27)
   break;

   if((int)(ch)==13)
    {
     MM=0;
     MH=MH+18;
     if(MH>=getmaxy()-18)
      {
       MH=0;
       clrscr();
      }
    }

   if(ch=='M' || ch=='m')
   {
   ma(MM,MH);
   MM=MM+15;
    if(MM>=getmaxy()-15)
     MM=0;
   MH=MH+18;
  
   if(MH>=getmaxy()-18)
   {
   MH=0;
   clrscr();
   }
   }

   if(ch=='S' || ch=='s')
   {
   sa(MM,MH);
   MM=MM+17;
   if(MM>=getmaxy()-17)
    MM=0;
  
   MH=MH+18;
   if(MH>=getmaxy()-18)
   {
   MH=0;
   clrscr();
   }
   }
 
  if(ch=='C' || ch=='c')
   {
   ca(MM,MH);
   MM=MM+15;
    if(MM>=getmaxy()-15)
   MM=0;
   MH=MH+18;

   if(MH>=getmaxy()-18)
   {
   MH=0;
   clrscr();
   }
   }

if(ch=='N' || ch=='n')
   {
   na(MM,MH);
   MM=MM+18;

   if(MM>=getmaxy()-18)
    MM=0;
   MH=MH+18;

   if(MH>=getmaxy()-18)
   {
   MH=0;
   clrscr();
   }
   }
 }
}

int ma(int x,int y)
{
int i, j;

int brana[15][14]={1,1,1,1,1,1,1,1,1,1,1,1,1,0,
		       0,1,1,1,1,1,1,1,1,1,1,1,1,1,
		       0,1,1,1,1,1,0,0,0,0,1,1,0,0,
			 0,0,0,1,1,1,1,0,0,0,1,1,0,0,
		       0,0,0,0,0,1,1,0,0,0,1,1,0,0,
		       0,0,0,0,0,1,1,0,0,0,1,1,0,0,
		       0,0,0,0,0,1,1,0,0,0,1,1,0,0,
		       0,0,0,1,1,1,1,1,0,0,1,1,0,0,
		       0,0,0,1,1,1,1,1,1,0,1,1,0,0,
		       0,0,0,1,1,1,1,1,1,1,1,1,0,0,
		       0,0,0,0,1,1,1,0,0,1,1,1,0,0,
		       0,0,0,0,0,0,0,0,0,0,1,1,0,0,
		       0,0,0,0,0,0,0,0,0,0,1,1,0,0,
		       0,0,0,0,0,0,0,0,0,0,0,1,0,0,
		       0,0,0,0,0,0,0,0,0,0,0,1,0,0,
		       };
      for(i=0;i<14;i++)
      for(j=0;j<15;j++)
      if(brana[i][j]==1)
      putpixel(j+x,i+y,YELLOW);
      return(0);
      }
int sa(int x,int y)
{
int i, j;
int brana[15][17]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
		       0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
			 0,0,0,1,1,1,1,1,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,1,0,1,1,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,
			 0,0,0,1,0,0,0,1,1,1,0,1,1,1,0,0,0,
			 0,0,0,1,1,0,1,1,1,0,0,0,1,1,0,0,0,
			 0,0,0,1,1,1,1,1,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,1,1,1,0,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0
			 };

      for( i=0;i<17;i++)
      for( j=0;j<15;j++)
      if(brana[i][j]==1)
      putpixel(j+x,i+y,RED);
      return(0);
      }

int na(int x,int y)
{
int i, j;
int brana[15][16]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,
			 0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
			 0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,1,1,1,0,0,0,1,1,0,0,0,
			 0,0,0,0,1,1,1,1,1,1,0,1,1,0,0,0,
			 0,0,0,1,1,1,1,0,1,1,0,1,1,0,0,0,
			 0,0,0,1,1,1,1,1,0,1,1,1,1,0,0,0,
			 0,0,0,1,1,1,1,1,0,0,1,1,1,0,0,0,
			 0,0,0,0,1,1,1,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,
			 0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
			 0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
			 0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,
			 };

      for(i=0;i<14;i++)
      for(j=0;j<15;j++)
      if(brana[i][j]==1)
      putpixel(j+x,i+y,GREEN);
      return(0);
      }


int ca(int x,int y)
{
int i, j;

int brana[14][13]={1,1,1,1,1,1,1,1,1,1,1,1,0,
			 0,1,1,1,1,1,1,1,1,1,1,1,1,
			 0,0,0,1,1,0,0,0,0,0,0,0,0,
			 0,0,0,1,1,1,0,0,0,0,0,0,0,
			 0,0,0,1,1,1,1,1,0,0,0,0,0,
			 0,0,0,1,1,0,1,1,1,1,0,0,0,
			 0,0,0,1,1,0,0,0,0,1,1,0,0,
			 0,0,0,1,1,0,0,0,0,1,1,0,0,
			 0,0,0,1,1,0,0,0,1,1,1,0,0,
			 0,0,0,1,1,0,0,1,1,1,0,0,0,
			 0,0,0,1,1,0,0,1,1,0,0,0,0,
			 0,0,0,1,1,0,1,1,1,0,0,0,0,
			 0,0,0,0,1,1,1,1,0,0,0,0,0,
			 0,0,0,0,1,1,1,0,0,0,0,0,0,
			 };

      for(i=0;i<13;i++)
      for(j=0;j<14;j++)
      if(brana[i][j]==1)
      putpixel(j+x,i+y,BLUE);
      return(0);
      }
