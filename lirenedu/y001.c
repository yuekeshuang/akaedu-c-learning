//  一 打印字符串
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
}



/*  二逆序输出
#include<stdio.h>
void rev_print_str(char*s)//逆序输出
{
char*p=s;
for(p=s;*p!='\0';p++)
//putchar(*p);
;
p--;//此语句指针p指向的是第一个字符串的结束标志‘\0'然后再减一个地址就是最后一个字符
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


/*  三 字符串拼接
#include<stdio.h>
void my_strcat(char*dest,char*src)//字符串拼接，my_strcat*s1,s2)
{
//  *dest=*src;
    char *p=dest;
for(;*p!='\0';p++)
     ;
	 for(;*src!='\0';p++,src++)
	 *p=*src;
	 *p=0;

	 }
int main()
{
char s1[20]="hello";
char s2[10]="world";
my_strcat(s1,s2);
printf("%s\n",s1);
return 0;
}

//putchar(*dest);
//ptutchar('\n');
//s1:"hello"   s2:"world"   "helloworld"


*/





/*  四 字符串拷贝


#include<stdio.h>
void m_strcpy(char*dest,char*src)//字符串拷贝
{
	for(;*src!='\0';*dest++=*src++)
	
           *dest=*src;
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

*/
