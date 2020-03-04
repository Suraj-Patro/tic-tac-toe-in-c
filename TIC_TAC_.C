#include<stdio.h>
#include<graphics.h>
void opening()
{
 setbkcolor(GREEN);
 settextstyle(1,0,4);
 outtextxy(90,238,"WELCOME TO TIC TAC TOE GAME");
}
void player1selection()
{
 setfillstyle(1,BLUE);
 rectangle(150,100,250,150);
 floodfill(160,120,WHITE);
 outtextxy(170,120,"PLAYER1");
 rectangle(260,100,450,150);
 outtextxy(280,120,"SELECT POSITION");
}
void player2selection()
{
 setfillstyle(1,BLUE);
 rectangle(150,100,250,150);
 floodfill(160,120,WHITE);
 outtextxy(170,120,"PLAYER2");
 rectangle(260,100,450,150);
 outtextxy(280,120,"SELECT POSITION");
}
main()
{
 int gd=DETECT,gm,i,j,k=0,l,flag=0;
 char p1,p2,a[20],b[20],p[9],z[9],pos;
 initgraph(&gd,&gm,"");
 opening();
 delay(1000);
 cleardevice();
 //player selection --------------------------------
 settextstyle(1,0,3);
 outtext("SELECT X OR O");
 outtextxy(0,30,"PLAYER1:");
 p1=getche();
 sprintf(a," %c",p1);
 outtextxy(110,30,a);
 outtextxy(0,70,"PLAYER2:");
 p2=getche();
 sprintf(b," %c",p2);
 outtextxy(110,70,b);
 delay(1000);
 //BOX----------------------------------------------
 cleardevice();
 graphdefaults();
 setbkcolor(RED);
 rectangle(150,200,450,410);
 setfillstyle(1,DARKGRAY);
 floodfill(200,250,WHITE);
 line(150,270,450,270);
 line(150,340,450,340);
 line(250,200,250,410);
 line(350,200,350,410);
 //-------------------------------------------------

 for(i=0,j=1;i<9;i+=2,j+=2)
 {
  player1selection();
  pos=getche();
  z[k]=pos;
  k++;
  for(l=0;l<k-1;l++)
  {
   if(pos==z[l])
   {
     sound(500);
     delay(600);
     nosound();
    pos=getche();
   }
  }
  if(pos=='1'){
   outtextxy(190,230,a);p[0]=p1;}
  else if(pos=='2'){
   outtextxy(280,230,a);p[1]=p1;}
  else if(pos=='3'){
   outtextxy(380,230,a);p[2]=p1;}
  else if(pos=='4'){
   outtextxy(190,300,a);p[3]=p1;}
  else if(pos=='5'){
   outtextxy(280,300,a);p[4]=p1;}
  else if(pos=='6'){
   outtextxy(380,300,a);p[5]=p1;}
  else if(pos=='7'){
   outtextxy(190,370,a);p[6]=p1;}
  else if(pos=='8'){
   outtextxy(280,370,a);p[7]=p1;}
  else if(pos=='9'){
   outtextxy(380,370,a);p[8]=p1;}
  else{}
  if(p[0]==p1&& p[1]==p1&& p[2]==p1 || p[0]==p1&& p[3]==p1&& p[6]==p1 || p[6]==p1&& p[7]==p1&& p[8]==p1 || p[2]==p1 && p[5]==p1 && p[8]==p1 || p[3]==p1 && p[4]==p1 && p[5]==p1 || p[0]==p1 && p[4]==p1 && p[8]==p1 || p[2]==p1 && p[4]==p1 && p[6]==p1 || p[1]==p1&&p[4]==p1&&p[7]==p1)
  {
   outtextxy(170,440,"PLAYER 1 WIN");
   flag=1;
   break;
  }
  player2selection();
  pos=getche();
  z[k]=pos;
  k++;
  for(l=0;l<k-1;l++)
  {
   if(pos==z[l])
   {
    sound(500);
    delay(600);
    nosound();
    pos=getche();
   }
  }
  if(pos=='1'){
   outtextxy(190,230,b);p[0]=p2;}
  else if(pos=='2'){
   outtextxy(280,230,b);p[1]=p2;}
  else if(pos=='3'){
   outtextxy(380,230,b);p[2]=p2;}
  else if(pos=='4'){
   outtextxy(190,300,b);p[3]=p2;}
  else if(pos=='5'){
   outtextxy(280,300,b);p[4]=p2;}
  else if(pos=='6'){
   outtextxy(380,300,b);p[5]=p2;}
  else if(pos=='7'){
   outtextxy(190,370,b);p[6]=p2;}
  else if(pos=='8'){
   outtextxy(280,370,b);p[7]=p2;}
  else if(pos=='9'){
   outtextxy(380,370,b);p[8]=p2;}
  else{}
  if(p[0]==p2&&p[1]==p2&&p[2]==p2 || p[3]==p2&&p[4]==p2&&p[5]==p2 || p[6]==p2&&p[7]==p2&&p[8]==p2 || p[0]==p2&&p[3]==p2&&p[6]==p2|| p[1]==p2&&p[4]==p2&&p[7]==p2 || p[2]==p2&&p[5]==p2&&p[8]==p2 || p[0]==p2&&p[4]==p2&&p[8]==p2 || p[2]==p2&&p[4]==p2&&p[6]==p2)
  {
   outtextxy(170,440,"PLAYER 2 WIN");
   flag=1;
   break;
  }
 }
 if(flag==0)
  outtextxy(170,440,"MATCH DRAW");
 getch();
 closegraph();
 return 0;
}