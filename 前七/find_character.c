#include<stdio.h>
void find_character(char *s, char ch)
{
char *p=s;
int count=0;

for(;*p != '\0';p++) {
	if(*p == ch)
		count++;
	else
	;
}
if(count  == 0)
printf("该字符串没有字符'x'\n");
else
printf("%d\n",count);
}

int main()
{
char ch='x';
char p[128];
gets(p);
find_character(p,ch);
return 0;
}
