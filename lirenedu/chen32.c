#include"stdio.h"             //状态机制；
int is_email(char*str)
{
	char*p;
	int s=1;
	for(p=str;*p!='\0';p++)
	{
		switch(s)
		{

			case 0:return 0;
			case 1:if((*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')
						   ||*p=='_'||(*p>='0'&&*p<='9'))
				    s=2;
				   else s=0;
				   break;
			case 2:if(*p=='@')
					   s=3;
				   else if(*p!='@')
				   {
					   s=1;
					   p--;
				   }
				   break;
			case 3:if(*p=='1')
					  s=4;
				  else 
					  s=0;
				  break;
			case 4:if(*p=='6')
					  s=5;
				  else 
					  s=0;
				  break;
			case 5:if(*p=='3')
					  s=6;
				  else 
					  s=0;
				  break;
			case 6:if(*p=='.')
					  s=7;
				  else 
					  s=0;
				  break;
			case 7:if(*p=='c')
					  s=8;
				  else 
					  s=0;
				  break;
			case 8:if(*p=='o')
					  s=9;
				  else 
					  s=0;
				  break;
			case 9:if(*p=='m')
					  s=10;
				  else 
					  s=0;
				  break;
			case 10:return 0;//待验证；
  
		}
	}
	if(s==10)
		return 1;
	else 
		return 0;
}
void print_str3(char*str)
{
	char*p=str;
	int s=1;
	for(;*p!='\0';p++)
	{
		switch(s)
		{
			case 1:if(*p!='/')
				   {
					   putchar(*p);
				   }
				   else 
					   s=2;
				   break;
		    case 2:if(*p=='/')
				   {
					   putchar('/');
					   s=2;
				   }
				   else if(*p!='*')
				   {
					   putchar('/');
					   putchar(*p);
					   s=1;
				   }
				   else if(*p=='*')
					   s=3;
				   break;
			case 3:if(*p!='*') 
					   ;
				   else
					   s=4;
				   break;
			case 4:if(*p!='/')
				   s=3;
				   else 
					   s=1;
				   break;
		//	case 5: s=1;
		//			break;

		}
	}


}
int main()
{
	char a[108];
	printf("请输入字符串a【108】\n");
	gets(a);
//	print_str3(a);
//  i=is_email(a);
  printf("%d\n",is_email(a));
	return 0;
}
