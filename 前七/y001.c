/*#include<stdio.h>
int my_strlen(char* s);
int main()
{
int i,j,p=0,w=0;
//char buf1[128]="a";
char*s="abcdefg";
if(s[i]>='a'&&s[i]<='z')
p++;

//printf("buf1长度为：%d,s长度为:%d\n",my_strlen(buf1),my_strlen(s));
printf("s长度为:%d\n",p);

return 0;
}*/






/*一 打印字符串
#include<stdio.h>
void print_str(char*w)//打印字符串
{
char*p=w;//重新定义一个字符串将w赋给p则p指向w的第一个地址
for(;*p!='\0';p++)
putchar(*p);
putchar('\n');
}
int main()
{
char burf1[128]="hello";
print_str(burf1);
return 0;
}*/



/*2逆序输出
#include<stdio.h>
void rev_print_str(char*s)//逆序输出
{
char*p=s;
for(p=s;*p!='\0';p++)
//putchar(*p);
;
p--;
for(;p>=s;p--)
putchar(*p);
putchar('\n');
}
int main()
{
char k[100]="liren";
rev_print_str(k);
return 0;
}
*/


/*3字符串拼接
#include<stdio.h>
void my_strcat(char*dest,char*src)//字符串拼接，my_strcat*s1,s2)
{
//*dest=*src;
char *p=dest;


//putchar(*dest);
//ptutchar('\n');
}           
*/
//s1:"hello"   s2:"world"   "helloworld"




#include<stdio.h>
void m_strcpy(char*dest,char*src)//字符串拷贝
{
//*dest=*src;
	char*p=dest,*q=src;
	for(;src!='\0';*dest++=*src++)
//		;
{
	dest=p;
	*dest=*p;
	}
//puts(dest);
}
int main()
{
char s1[100]="hello";
char s2[10]="world";
m_strcpy(s1,s2);
printf("%s",s1);
putchar(10);
return 0;
}
/*int main()
{
int count=0;
char *s="abcdefg";
char *p;
for(p=s;*p!='\0';p++)
count++;
printf("s长度为：%d\n",count);
return 0;
}
*/
