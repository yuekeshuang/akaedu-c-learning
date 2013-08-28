#include <stdio.h>
int main()
{
	char str[100]="abcde";
//	char str1[5]="abcde";
	char *p;
	p = str;

	printf("str = %s\n",str);  //str为数组名即首地址，若求字符串则为%s 指针就为%p 
//	printf("*str = ");
	printf("p = %p\n", p);
	
	p = "hello";
	printf("p = %p\n", p);

	printf("p = %s\n", p);
//	strcpy(p,world);
//	printf('\n'+);
	
	return 0;

}

