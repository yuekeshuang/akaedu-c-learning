#include<stdio.h>
#include<string.h>
void find_world(char *s,int n)
{
	char *str;
	char *k;
	char w[20];
	char *p = s;
	int r = 1, len;
	len=strlen(w);

	for (; *p != '\0'; p++) {
		switch(r) {
			case 1: if (*p != *str )
						;
						r=1;
					else
						str++;
						r=2;
						break;
			case 2: if (*p != *str )
						;
						r=1;
					else
						str++;
						r=3;
						break;
			case 3: if (*p != *str )
						;
						r=1;
					else
						r=2;
						break;
			case 4: if (str !== '\0')
						;
						r=1;
					else
						{
						for (k=w; k != 0; k++ = (p-len-1)++)
							*(p-len-1)=*k;
						
						  }
						
						break;
		  }


	  }
		
}

/*
void insert_str(char *s,int n) 
{

  }
*/
int main()
{
	char s[128],p[128],str[128];
	scanf("%s%s",s,p);
	find_world(s,128);
	puts(s);
	putchar(10);
	return 0;

  }













