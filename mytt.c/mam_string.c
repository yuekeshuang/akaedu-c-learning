#include <stdio.h>
int main(void)
{
  char p[128];
  printf("请输入字符串：\n"); 
  gets(p);
  printf("以下各个单词为：\n");
  man_string(p);
  putchar(10);
  return 0;
}

void man_string(char *p)
{
  int s = 0, count = 0;

  for(; *p != '\0'; p++) {
	switch(s) {

	  case 0: if(!(*p >= 'a'&& *p <= 'z'||*p >= 'A'&& *p <= 'Z'))
				;
			  else
				  {
					putchar(*p);
					s = 1;
				  }
			  break;
	  case 1: if( (*p >= 'a'&& *p <= 'z'||*p >= 'A'&& *p <= 'Z'))
			  {
				putchar(*p);
			  }
			  if(!(*(p-1) >= 'a'&& *(p-1) <= 'z'||*(p-1) >= 'A'&& *(p-1) <= 'Z'))
				count++;
				s = 2;
			  break;

	  case 2: if(*p == ' ')
				if(*(p+1) != ' ')
				  putchar(10);
				else
				  ;
			  else {
				putchar(10);
				putchar(*p);
				s = 1;
			  }
			  break;


	}

  }
  putchar(10);
  printf("world = %d\n", count);
}

