#include<stdio.h>
#define N 10
void welcome();
void initqipan();
void showqi(int i);
void save(int p);
void panduan(int p);
void heqi();
void over();
int zouqihang();
int zouqilie();
/******************结构体*****************/
struct zuobiao
{
 int x[N];
 int y[N];
}weizhi[N];
/******************主函数*****************/
void main()
{
 int p=0;
 welcome();
 initqipan();
 for(p=1;p<=N;p++)
 {
  weizhi[p].x[p]=zouqihang();
  weizhi[p].y[p]=zouqilie();
  save(p);
  showqi(p);
  panduan(p);
 }
 if(p==N)
  heqi();
 over();
}
/******************建立棋盘*****************/
void initqipan()
{
 int i,j;
 for(i=0;i<N;i++)
 {
  printf("%d",i);
  printf(" ");
 }
 printf("\n");
 for(i=1;i<N;i++)
 {
  for(j=0;j<N;j++)
  {
   if(j==0)
    printf("%d",i);
   else
    printf("·");
  }
  printf("\n");
 }
}
/******************显示棋子*****************/
void showqi(int p)
{
 int i,j,k,m;
 int a[N],b[N];
 FILE *fp;
 fp=fopen("wuzi_list","rb");
 for(i=1;i<=N;i++)
 {
  fread(&weizhi[i],sizeof(struct zuobiao),1,fp);
  a[i]=weizhi[i].x[i];
  b[i]=weizhi[i].y[i];
 }
 for(m=1;m<p;m++)
 {
  while(weizhi[p].x[p]==a[m]&&weizhi[p].y[p]==b[m])
  {
   printf("错误!\n");
   weizhi[p].x[p]=zouqihang();
   weizhi[p].y[p]=zouqilie();
   m=1;
  }
 }
 for(i=0;i<N;i++)
 {
  printf("%d",i);
  printf(" ");
 }
 printf("\n");
 for(i=1;i<N;i++)
 {
  for(j=1;j<N;j++)
  {
   if(j==1)
    printf("%d",i);
   for(k=1;k<=p;k++)
   {
    if(i==weizhi[k].x[k]&&j==weizhi[k].y[k])
    {
     if(k%2==1)
     {printf("○");
     break;}
     else if(k%2==0)
     {printf("●");
     break;}
    }
   }
   if(k>p)printf("·");
   else continue;
  }
  printf("\n");
 }
}
/******************走棋行*****************/
int zouqihang()
{
 int x;
 printf("请输入要走棋子所在行数!\n");
 printf("x=");
 scanf("%d",&x);
 while(x>N-1||x<1)
 {
  printf("错误!\n");
  printf("请输入要走棋子所在行数!\n");
  printf("x=");
  scanf("%d",&x);
 }
 return x;
}
/******************走棋列*****************/
int zouqilie()
{
 int y;
 printf("请输入要走棋子所在列数!\n");
 printf("y=");
 scanf("%d",&y);
 while(y>N-1||y<1)
 {
  printf("错误!\n");
  printf("请输入要走棋子所在列数!\n");
  printf("y=");
  scanf("%d",&y);
 }
 return y;
}
/******************文件保存*****************/
void save(int i)
{
 FILE *fp;
 fp=fopen("wuzi_list","wb");
 fwrite(&weizhi[i],sizeof(struct zuobiao),1,fp);
}
/****************判断输赢*******************/
void panduan(int p)
{
 int i,j,k[8]={1,1,1,1,1,1,1,1,};
 int a[N],b[N];
 FILE *fp;
 fp=fopen("wuzi_list","rb");
 for(i=1;i<=p;i++)
 {
  fread(&weizhi[i],sizeof(struct zuobiao),1,fp);
  a[i]=weizhi[i].x[i];
  b[i]=weizhi[i].y[i];
 }
 /*****************判断行******************/
 for(i=1;i<=p;i++)
 {
  if(i%2==1)
  {
   for(j=1;j<=p;j=j+2)
   {
    if((a[i]==a[j])&&(b[i]==b[j]-1))
    {
     k[0]++;
     continue;
    }
    else if((a[i]==a[j])&&(b[i]==b[j]-2))
    {
     k[0]++;
     continue;
    }
    else if((a[i]==a[j])&&(b[i]==b[j]-3))
    {
     k[0]++;
     continue;
    }
    else if((a[i]==a[j])&&(b[i]==b[j]-4))
    {
     k[0]++;
     continue;
    }
    else if(k[0]==5)
    {
     printf("Player 1 wins!!!\n");
    }
    else
     continue;
   }
   if(k[0]==5)
    break;
   k[0]=1;
  }
  else if(k[0]==5)
   break;
  else if(i%2==0)
  {
   for(j=2;j<=p;j=j+2)
   {
    if((a[i]==a[j])&&(b[i]==b[j]-1))
    {
     k[1]++;
     continue;
    }
    else if((a[i]==a[j])&&(b[i]==b[j]-2))
    {
     k[1]++;
     continue;
    }
    else if((a[i]==a[j])&&(b[i]==b[j]-3))
    {
     k[1]++;
     continue;
    }
    else if((a[i]==a[j])&&(b[i]==b[j]-4))
    {
     k[1]++;
     continue;
    }
    else if(k[1]==5)
    {
     printf("Player 2 wins!!!\n");
    }
    else
     continue;
   }
   if(k[1]==5)
    break;
   k[1]=1;
  }
 }
 /**********************判断列************************/
 for(i=1;i<=p;i++)
 {
  if(k[0]==5||k[1]==5)
   break;
  else if(i%2==1)
  {
   for(j=1;j<=p;j=j+2)
   {
    if((a[i]==a[j]-1)&&(b[i]==b[j]))
    {
     k[2]++;
     continue;
    }
    else if((a[i]==a[j]-2)&&(b[i]==b[j]))
    {
     k[2]++;
     continue;
    }
    else if((a[i]==a[j]-3)&&(b[i]==b[j]))
    {
     k[2]++;
     continue;
    }
    else if((a[i]==a[j]-4)&&(b[i]==b[j]))
    {
     k[2]++;
     continue;
    }
    else if(k[2]==5)
    {
     printf("Player 1 wins!!!\n");
    }
    else
     continue;
   }
   if(k[2]==5)
    break;
   k[2]=1;
  }
  else if(k[2]==5)
   break;
  else if(i%2==0)
  {
   for(j=2;j<=p;j=j+2)
   {
    if((a[i]==a[j]-1)&&(b[i]==b[j]))
    {
     k[3]++;
     continue;
    }
    else if((a[i]==a[j]-2)&&(b[i]==b[j]))
    {
     k[3]++;
     continue;
    }
    else if((a[i]==a[j]-3)&&(b[i]==b[j]))
    {
     k[3]++;
     continue;
    }
    else if((a[i]==a[j]-4)&&(b[i]==b[j]))
    {
     k[3]++;
     continue;
    }
    else if(k[3]==5)
    {
     printf("Player 2 wins!!!\n");
    }
    else
     continue;
   }
   if(k[3]==5)
    break;
   k[3]=1;
  }
 }
 /****************判断对角（左上-右下）******************/
 for(i=1;i<=p;i++)
 {
  if(k[0]==5||k[1]==5||k[2]==5||k[3]==5)
   break;
  else if(i%2==1)
  {
   for(j=1;j<=p;j=j+2)
   {
    if((a[i]==a[j]-1)&&(b[i]==b[j]-1))
    {
     k[4]++;
     continue;
    }
    else if((a[i]==a[j]-2)&&(b[i]==b[j]-2))
    {
     k[4]++;
     continue;
    }
    else if((a[i]==a[j]-3)&&(b[i]==b[j]-3))
    {
     k[4]++;
     continue;
    }
    else if((a[i]==a[j]-4)&&(b[i]==b[j]-4))
    {
     k[4]++; 
     continue;
    }
    else if(k[4]==5)
    {
     printf("Player 1 wins!!!\n");
    }
    else
     continue;
   }
   if(k[4]==5)
    break;
   k[4]=1;
  }
  else if(k[2]==5)
   break;
  else if(i%2==0)
  {
   for(j=2;j<=p;j=j+2)
   {
    if((a[i]==a[j]-1)&&(b[i]==b[j]-1))
    {
     k[5]++;
     continue;
    }
    else if((a[i]==a[j]-2)&&(b[i]==b[j]-2))
    {
     k[5]++;
     continue;
    }
    else if((a[i]==a[j]-3)&&(b[i]==b[j]-3))
    {
     k[5]++;
     continue;
    }
    else if((a[i]==a[j]-4)&&(b[i]==b[j]-4))
    {
     k[5]++;
     continue;
    }
    else if(k[5]==5)
    {
     printf("Player 2 wins!!!\n");
    }
    else
     continue;
   }
   if(k[5]==5)
    break;
   k[5]=1;
  }
 }
 /**********判断对角（左下-右上）************/
 for(i=1;i<=p;i++)
 {
  if(k[0]==5||k[1]==5||k[2]==5||k[3]==5||k[4]==5||k[5]==5)
   break;
  else if(i%2==1)
  {
   for(j=1;j<=p;j=j+2)
   {
    if((a[i]==a[j]+1)&&(b[i]==b[j]-1))
    {
     k[6]++;
     continue;
    }
    else if((a[i]==a[j]+2)&&(b[i]==b[j]-2))
    {
     k[6]++;
     continue;
    }
    else if((a[i]==a[j]+3)&&(b[i]==b[j]-3))
    {
     k[6]++;
     continue;
    }
    else if((a[i]==a[j]+4)&&(b[i]==b[j]-4))
    {
     k[6]++; 
     continue;
    }
    else if(k[6]==5)
    {
     printf("Player 1 wins!!!\n");
    }
    else
     continue;
   }
   if(k[6]==5)
    break;
   k[6]=1;
  }
  else if(k[6]==5)
   break;
  else if(i%2==0)
  {
   for(j=2;j<=p;j=j+2)
   {
    if((a[i]==a[j]+1)&&(b[i]==b[j]-1))
    {
     k[7]++;
     continue;
    }
    else if((a[i]==a[j]+2)&&(b[i]==b[j]-2))
    {
     k[7]++;
     continue;
    }
    else if((a[i]==a[j]+3)&&(b[i]==b[j]-3))
    {
     k[7]++;
     continue;
    }
    else if((a[i]==a[j]+4)&&(b[i]==b[j]-4))
    {
     k[7]++;
     continue;
    }
    else if(k[7]==5)
    {
     printf("Player 2 wins!!!\n");
    }
    else
     continue;
   }
   if(k[7]==5)
    break;
   k[7]=1;
  }
 }
}
/****************和棋*******************/
void heqi()
{
 printf("平局\n");
}
/****************游戏结束*******************/
void over()
{
 printf("游戏结束!!!\n");
}
/****************游戏开始*******************/
void welcome()
{
 printf("欢迎使用!!!\n");
}
