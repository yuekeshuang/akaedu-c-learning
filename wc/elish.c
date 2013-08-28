#include "stdafx.h" 

#include <windows.h> 
#include <stdio.h> 
#include <malloc.h> 
#include <winbase.h> 
#include <process.h> 

void Search() 
{ 
  char temp[100]; 
  char buffer[2]; 
  char result[100]; 
  printf("请输入要查询的单词:\n"); 
  scanf("%s",&temp); 
  buffer[0]=temp[0]; 
  buffer[1]='\0'; 
  int ret=GetPrivateProfileString(buffer,temp,0,result,100,"./date.ini"); 
  if(ret>0) 
	printf("%s\n\n\n\n\n",result); 
  else 
	printf("对不起，没有您要查找的单词.\n\n\n\n\n"); 
} 

void InsertItem() 
{ 
  char temp[100]; 
  char buffer[2]; 
  char result[100]; 
  printf("请输入要插入的单词:\n"); 
  scanf("%s",&temp); 
  printf("请输入单词的解释:\n"); 
  getchar(); 
  scanf("%s",&result); 
  buffer[0]=temp[0]; 
  buffer[1]='\0'; 
  int ret=WritePrivateProfileString(buffer,temp,result,"./date.ini"); 
  if(ret=0) 
	printf("插入失败。\n\n\n\n\n"); 
  else 
	printf("插入成功。\n\n\n\n\n"); 
} 

int main(int argc, char* argv[]) 
{ 
  int index; 
main: 
  printf("**************MENU***************\n\n"); 
  printf(" 1 英译汉\n"); 
  // printf("2 汉译英\n"); 
  printf(" 2 插入新的词条\n"); 
  // printf(" 3 删除已有词条\n"); 
  printf(" 3 清空屏幕\n"); 
  printf(" 4 退出\n\n"); 
  printf("**********************************\n"); 
  do{ 
	printf("请选择操作(1~4):\n"); 
	scanf("%d",&index); /*输入选择项*/ 
  }while(index<0||index>5); /*选择项不在0~4之间重输*/ 
  switch(index) 
  { 
	case 1: 
	  Search(); 
	  goto main; 
	  break; 
	case 2: 
	  InsertItem(); 
	  goto main; 
	  break; 
	case 3: 
	  system("cls"); 
	  goto main; 
	  break; 
	case 4: 
	  return 0; 
	  break; 
	default: 
	  break; 
  } 
  return 0; 
} 
