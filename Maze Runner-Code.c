#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"

void countm(int *countt,int* inc)
{ *inc+=5;
  setcolor(14);
  outtextxy(510,20,"CONTROL KEYS:");
  outtextxy(510,40,"U -> Up");
  outtextxy(510,56,"D -> Down");
  outtextxy(510,72,"L -> Left");
  outtextxy(510,88,"R -> Right");
}

void body()
{ setcolor(7);
  line(0,100,450,100);
  line(50,130,400,130);
  line(100,160,450,160);
  line(150,190,300,190);
  line(100,220,250,220);
  line(50,250,200,250);
  line(0,400,500,400);
  line(450,370,500,370);
  line(0,100,0,400);
  line(50,130,50,370);
  line(100,160,100,220);
  line(100,280,100,400);
  line(150,250,150,370);
  line(200,280,200,400);
  line(250,220,250,370);
  line(300,190,300,400);
  line(350,160,350,370);
  line(400,190,400,400);
  line(450,100,450,370);
  setcolor(15);
  circle(500,385,10);
  setcolor(WHITE);
}
void ball(int j,int k,int l)
{
 circle(j,k,10);
 setcolor(WHITE);
 setfillstyle(INTERLEAVE_FILL,10);
 floodfill(j,k,WHITE);
}
void condition(int *j,int *k)
{  if(*k==110){
  if(*j<450 && *j>0)
  *k=*k+5;
  }
   if(*j==10){
    if(*k<400 && *k>100)
*j+=5;
   }
   if(*k==390){
     if(*j<500 &&* j>0)
     *k-=5;
     }
   if(*j==440){
     if(*k>100 && *k<380)
     *j-=5;
     }
   if(*k==380){
   if(*j<500&& *j>440)
   *k+=5;
   }
   if(*k>=120 && *k<=140 ){
   if(*j<410 && *j>40 && *k<=130)
   *k-=5;
   if(*j<410 && *j>40 && *k>=130)
   *k+=5;
   }
  if(*k>=150 && *k<=170 && *j>=90 &&* j<=450){
  if(*k<=160) *k-=10;
  *k+=5;
  }
  if(*k>=180&&*k<=200&&*j>=140&&*j<=310)
  { if(*k>=190 ) *k+=10;
    *k-=5;}
  if(*k>=210&&*k<=230&&*j>=90&&*j<=260)
  {if(*k>=220) *k+=10;
   *k-=5;
  }
  if(*k<=260 && *k>=240 && *j<=210&& *j>40){
  if(*k>=250) *k+=10;
  *k-=5;
  }
  if(*k<=370&&*k>=130&&*j<=60&&*j>=40){
  if(*j<=50) *j-=10;
  *j+=5;
  }
  if(*k<=220&&*k>=160&&*j<=110&&*j>=90){
  if(*j<=100) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=280&&*j<=110&&*j>=90){
  if(*j<=100) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=250&&*j<=160&&*j>=140){
  if(*j<=150) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=280&&*j<=210&&*j>=190){
  if(*j<=200) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=220&&*j<=260&&*j>=240){
  if(*j<=250) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=190&&*j<=310&&*j>=290){
  if(*j<=300) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=160&&*j<=360&&*j>=340){
  if(*j<=350) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=190&&*j<=410&&*j>=390){
  if(*j<=400) *j-=10;
  *j+=5;
  }
}
void caption()
{
  setcolor(9);
  settextstyle(0,HORIZ_DIR,0);
  outtextxy(10,20,"Try solving the Maze");
  outtextxy(10,35,"or Press 'SPACE' to EXIT");
  setcolor(WHITE);
}
int level_1(int *p)
{
 int i,j=20,k=250,l=10,m=10,co_mo=0,inc=0;
 char c;
 cleardevice();
 while(1){
 setcolor(4);
 settextstyle(1,HORIZ_DIR,5);
 outtextxy(40,100,"MAZE RUNNER");
 settextstyle(0,HORIZ_DIR,0);
 setcolor(15);
 outtextxy(400,150,"Press 'SPACE' to Play.");
 outtextxy(450,350,"Project done by:");
 outtextxy(450,370, "Pooja Vasudev,");
 outtextxy(450,390, "Muskan Mishra,");
 outtextxy(450,410, "Shambhavi Awasthi,");
  char ch=getch();
 if(ch==' ') break;
 getch();
  }
 cleardevice();
 body();
 ball(j,k,l);
 caption();
 countm(&co_mo,&inc);
for(i=0;i<m++;i++){
 condition(&j,&k);
 countm(&co_mo,&inc);
 c=getch();
 cleardevice();
 if(c==75||c=='L') j-=5;
 if(c==80||c=='D') k+=5;
 if(c==77||c=='R') j+=5;
 if(c==72||c=='U') k-=5;
 if(c==' ') return 0;
  *p=co_mo;
 caption();
 body();
 ball(j,k,l);
 if(j>=500) return 1;
  }


return 9999;
}
int main()
{
  int d=DETECT,g;
  int flag,point=0;
  initgraph(&d,&g,"C:\\TC\\BGI");

  flag=level_1(&point);

getch();
closegraph();
return flag;
}