#include <stdio.h>
int main(void)
{
	char *p = "zhouyihui";
	char s[20]; 
	char x[5] = "abcde" ;
	char  str[19];
	char ch[20];
	gets(s);
	fgets(ch, 20, stdin);
	
	scanf("%s",str);
	putchar(10);
	printf("%-5.12s%8d\n", p, 22);
	printf("%-15.12s%8d\n", s, 24);
	printf("%s\n", str);
	printf("%s\n", x);
//  	printf("%s\n",ch);
	puts(ch);

	return 0;
}


