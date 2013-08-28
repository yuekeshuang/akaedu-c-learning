#include<stdio.h>

int main()
{
char s[100]="idsafkl";
char *p=s;
//scanf("%s",s);
for(p=s;*p!=0;p++)
p--;
for(;p>=s;p--)
putchar(*p);
putchar(10);
return 0;
}
