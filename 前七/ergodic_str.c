#include<stdio.h>
void ergodic_str(char *s, char *str,int n)
{
  char *p = s;
				
  for (; *p != 0; p++) {
	if (*p == *(p+1)) {
	  *str=*p;

	  str++;
	  //p++;
	}
	*str=='\0';
  }
  //puts(str); 只有当指针str指向首地址时才可以用，此时str指向的是末尾

}

int main(void)
{
  char p[128],str[128];

  gets(p);
  ergodic_str(p,str,128);
  puts(str);
  putchar(10);
  return 0;
}

/*
void print_ch(char *s,int n)
{
 int i,j;
 char p[128];
 for (i=0; i < n; i++) {
   for(; j<n; j++)
	 if()
   }

	
}
*/
