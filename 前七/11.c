/*#include<stdio.h>
int  max(int  a[],int n)


{
int i;
int max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>=max)	
//temp=max;
max=a[i];

}
//printf("%d\n",max);
return max;
}
 int main()
 {
 int a[3];
 max(a,3);
 // printf("%d\n",max);
 return 0;
 }*/
 /*
 #include<stdio.h>
 char   chose(char *s,int n)
 {
 int i;
 char max=s[0];
 for(i=1;i<n;i++)
 	{
	if(s[i]>max)
	max=s[i];

	}

//putchar(max);
      return (max);
 }
int main(void)
{
char p[4];
int i;
for(i=0;i<4;i++)
p[i]=getchar();
chose( p,4);
//putchar( p);
putchar(chose(p,4));
putchar(10);
return 0;
}
*/
#include<stdio.h>
void rev_print_str(char *s,int n)
{
char *p;
p=s;
for(;*p!='\0';p++)
;
p--;
for(;p>=s;p--)
putchar(*p);
putchar(10);
}

int main()
{
char s[10];
rev_print_str(s,10);
putchar(10);
return 0;

}













