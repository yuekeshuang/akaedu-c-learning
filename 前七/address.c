#include <stdio.h>
int main()
{
int a = 100;  //此刻a存储的是数据100	
int *p = 100; //此刻100是直接赋给指针p，及p存储的是地址100
int *s;
s=&a;
//printf("请输入两个数:\n");
// scanf("%d %d", &a, p);
 //printf("%x %d\n", a, p);
 printf("a = 0x%x\n", a);
 printf("p = 0x%x\n",  p); 
 printf("*s = 0x%x\n", *s); 
 printf("p+1 = 0x%x\n", p+1); 

 printf("*(s+1) = 0x%x\n", *(s+1)); 

 return 0;


  }
