#include "option.h"
#include "def.h"
#include "44b.h"
#include "44blib.h"


#include "GUI.H"
#include "DIALOG.H"
#include "WM.h"

#include "button.h"
#include "progbar.h"

#include "stdlib.h"
#include "wall.h"
#include "time.h"

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@  1 代表白棋，2代表 黑棋， 0代表 空着 @@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#define HANG 10
#define LIE  10 

int map[HANG][LIE]={0};

int store_x;
int store_y;

struct point_xy
{
int x_point;
int y_point;
int color;
int x_map;
int y_map;


}point;//={20,20,0,0,0};;

struct direct
{
int x;
int y;

}direction[8]={ {-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1} }; 


//@@@@@@@@@@@@@@@@@@@@@@@@@ 函数声明 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void draw_white(int x,int y);
void draw_black(int x,int y);
void draw_map(void);
void display_all(void);
void change_color(void);
int if_won(int x0,int y0,int color);
void map_initial(void);
void draw_net(void);
void draw_point(void);
void draw_curcolor(int x,int y,int color);

//@@@@@@@@@@@@@@@@@@@@@  屏幕上显示的按键  @@@@@@@@@@@@@@@@@@@@@@@@@@
static void Button(void) 
{

 BUTTON_Handle hButton[6];
 int t=0;
 int i=0;
 /* Create the button*/
      //BUTTON_SetBkColor(hButton[0],0,GUI_RED);

 hButton[0] = BUTTON_Create(260, 160, 20, 20, 1, WM_CF_SHOW);
 hButton[1] = BUTTON_Create(240, 180, 20, 20, 2, WM_CF_SHOW);
 hButton[2] = BUTTON_Create(260, 180, 20, 20, 3, WM_CF_SHOW);
 hButton[3] = BUTTON_Create(280, 180, 20, 20, 4, WM_CF_SHOW);
 hButton[4] = BUTTON_Create(260, 220, 20, 20, 5, WM_CF_SHOW);
 //hButton[5] = BUTTON_Create(240, 220, 20, 20, 6, WM_CF_SHOW);

 BUTTON_SetText(hButton[0], "w");
 BUTTON_SetText(hButton[1], "a");
 BUTTON_SetText(hButton[2], "s");
 BUTTON_SetText(hButton[3], "d");
 BUTTON_SetText(hButton[4], "B");
 //BUTTON_SetText(hButton[5], "W");

 t=GUI_WaitKey();
 
 switch( t )
 {
 case 1:
 point.y_point-=20;
 if(point.y_point<20)
 point.y_point+=20;
 break;
 case 2:
 point.x_point-=20;
 if(point.x_point<20)
 point.x_point+=20;
 break;
 case 3:
 point.y_point+=20;
 if(point.y_point>200)
 point.y_point-=20;
 break;
 case 4:
 point.x_point+=20;
 if(point.x_point>200)
 point.x_point-=20;
 break;
 case 5:
 if( map[point.y_map][point.x_map]==0 )
 {
change_color();
map[point.y_map][point.x_map]=point.color;
draw_map();

if( if_won(point.y_map,point.x_map,point.color) )
{
GUI_SetTextMode(GUI_DM_TRANS); //设置为透明
GUI_SetFont(&GUI_Font8x16x1x2);
GUI_DispStringAt("win!",250,90);

for(i=0;i<5;i++)
GUI_Delay(1000);
map_initial();

GUI_SetDrawMode(GUI_DM_NORMAL);
GUI_SetColor(GUI_GREEN);
GUI_FillRect(0,0,320,240);
draw_net();
draw_point();
}

 }
 break;
 case 6:
 /*
 if( map[point.y_map][point.x_map]==0 )
map[point.y_map][point.x_map]=1;
 */
 break;
 default:

 break;
 
 }

 
 
 for(t=0;t<6;t++)
BUTTON_Delete(hButton[t]);
 
}


//@@@@@@@@@@@@@@@@@@@ 地图初始化 @@@@@@@@@@@@@@@@@@@@@@@@@@@
void map_initial(void)
{
int i,j;
for(i=0;i<10;i++)
for(j=0;j<10;j++)
map[i][j]=0;

}



//@@@@@@@@@@@@@@@@@@@@   改变颜色 @@@@@@@@@@@@@@@@@@@@@@@@@@@
void change_color(void)
{
switch(point.color)
{
case 0:
point.color=1;
break;
case 1:
point.color=2;
break;
case 2:
point.color=1;
break;
default:
break;
}

}


//@@@@@@@@@@@@@@@@@@@@@ 转换坐标  @@@@@@@@@@@@@@@@@@@@@@@@@@@
void change_point(void)
{
point.x_map=(point.x_point-20)/20;
point.y_map=(point.y_point-20)/20;

}



//@@@@@@@@@@@@@@@@@@@@@@  绘制网格 @@@@@@@@@@@@@@@@@@@@@@@@@@
void draw_net(void)
{
int i;

GUI_SetDrawMode(GUI_DM_NORMAL);
GUI_SetColor(GUI_RED);

for(i=0;i<=10;i++)
GUI_DrawHLine(20+20*i,20,220); //y,x0,x1
for(i=0;i<=10;i++)
GUI_DrawVLine(20+20*i,20,220); //x,y0,y1

}

//@@@@@@@@@@@@@@@@@@@@@  画出当前光标所在的位置 @@@@@@@@@@@@@@@@@@ 
void draw_point(void)
{
GUI_SetDrawMode(GUI_DM_NORMAL);
GUI_SetColor(GUI_BLUE);

GUI_DrawRect(point.x_point+2,point.y_point+2,point.x_point+18,point.y_point+18);

}

//@@@@@@@@@@@@@@@@@@@@@  删除指针形状 @@@@@@@@@@@@@@@@@@@@@@@@@@
void delete_point(void)
{
GUI_SetDrawMode(GUI_DM_NORMAL);
GUI_SetColor(GUI_GREEN);

GUI_DrawRect(store_x+2,store_y+2,store_x+18,store_y+18);
}

//@@@@@@@@@@@@@@@@@@@@  覆盖背景，重画方格 @@@@@@@@@@@@@@@@@@@@@@
void display_all(void)
{
GUI_SetColor(GUI_GREEN);
GUI_FillRect(0,0,320,240);

draw_net();
draw_map();
draw_point();

}

//@@@@@@@@@@@@@@@@@@  绘制一个白棋 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void draw_white(int x,int y)
{

GUI_SetColor(GUI_WHITE);
GUI_FillCircle(x*20+20+10,y*20+20+10,7);
}



//@@@@@@@@@@@@@@@@@  绘制一个黑棋  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void draw_black(int x,int y)
{
GUI_SetColor(GUI_BLACK);
GUI_FillCircle(x*20+20+10,y*20+20+10,7);
}

//@@@@@@@@@@@@@@@@  绘制当前棋子的颜色 @@@@@@@@@@@@@@@@@@@@@@@@@
void draw_curcolor(int x,int y,int color)
{
if(color==1)
draw_white(x,y);
else if(color==2)
draw_black(x,y);
GUI_FillCircle(x,y,7);
}

//@@@@@@@@@@@@@@@@  绘制map中的信息 @@@@@@@@@@@@@@@@@@@@@@@@@@@
void draw_map(void)
{
int i,j;

for(i=0;i<10;i++)
for(j=0;j<10;j++)
{
if(map[i][j]==1) //如果黑棋
draw_white(j,i);
else if(map[i][j]==2) //如果白棋
draw_black(j,i);
else 
;
}

}

//@@@@@@@@@@@@@@@@@@@@@@@@@@@ 判断当前颜色是否能赢 @@@@@@@@@@@@@@@@
int if_won(int x0,int y0,int color)
{
int i=0,j=0;
int count_num=1;
for(i=0;i<4;i++)
{
count_num=1;
for(j=1;j<5;j++)
{
if( map[x0+direction[i].x*j][y0+direction[i].y*j]!=color )
break;
count_num++;
}
for(j=1;j<5;j++)
{
if( map[x0+direction[i+4].x*j][y0+direction[i+4].y*j]!=color )
break;
count_num++;
}
if(count_num==5)
return 1;
}
return 0;
}


void key_s3c(void)
{
int which_key,i;
while((rPDATG & 0xf0)==0xf0);
which_key=rPDATG&0xf0;
    switch(which_key)
    {
case 0xe0:
   Led_Display(0x1);
   point.y_point-=20;
   if(point.y_point<20)
   point.y_point=200;
   break;
case 0xd0:
   Led_Display(0x2);
   point.x_point-=20;
   if(point.x_point<20)
   point.x_point=200;
   break;
case 0xb0:
   Led_Display(0x4);
   if( map[point.y_map][point.x_map]==0 )
{
change_color();
map[point.y_map][point.x_map]=point.color;
draw_map();

if( if_won(point.y_map,point.x_map,point.color) )
{
GUI_SetTextMode(GUI_DM_TRANS); //设置为透明
GUI_SetFont(&GUI_Font8x16x1x2);
GUI_DispStringAt("win!",250,90);

for(i=0;i<20;i++)
GUI_Delay(1000);
map_initial();

GUI_SetDrawMode(GUI_DM_NORMAL);
GUI_SetColor(GUI_GREEN);
GUI_FillRect(0,0,320,240);
draw_net();
draw_point();
}

}
   break;
case 0x70:
   Led_Display(0x7);
   /*
   point.x_point+=20;
   if(point.x_point>200)
   point.x_point-=20;*/
   break;
default :
   break;
    }
    
    
}
//@@@@@@@@@@@@@@@@@@@@@@  MAIN  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void Main(void)
{
int i=0,j=0;


GUI_Init();
GUI_SetBkColor(GUI_GREEN);
GUI_Clear();
GUI_SetColor(GUI_BLACK);
point.x_point=20;point.y_point=20;
draw_net();
draw_point();
draw_curcolor(270,50,1);

while(1)
{
store_x=point.x_point;
store_y=point.y_point;


//Button();
key_s3c();
change_point();
draw_point();

if( (store_x!=point.x_point)||(store_y!=point.y_point) )
delete_point();

draw_map();
change_color();
draw_curcolor(270,50,point.color);
change_color();


GUI_Delay(3000);
}

}


