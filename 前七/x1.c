#include<stdio.h>
#include<string.h>
void shuijishu(char *s,int n)
{
  int i,j,x;
  srand(time(NULL));
  for(i=0;i<n;i++)
  {
    s[i]=rand()%10+'0';
    for(j=0;j<i;j++)
    {
      if(s[i]==s[j] && j != i)
      {
	i--;
	break;
      }
    }
  }
  s[n-1]='\0';
  printf("%s\n", s);
}

void print_input(char *p,int n)
{
  int i,j;
again:
  for(i=0;i<n;i++)
    scanf("%c",&p[i]);

  for(i=0;i<n;i++)
    for(j=0;j<i;j++)
    {
      if(p[i]==p[j] && i != j)
      {

	printf("please input again:\n");
	goto again;
      }

      p[n-1]='\0';

    }

  //	printf("please input again:\n");
  //	goto again;
}

void print_number(char  a[],char s[],int n)
{
  int   i,j,k,count=0;
  int a_flag = 0, b_flag = 0;
  n = n-1;

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i]==s[j]&&i==j)
      {
	printf("A");
	a_flag++;
      }

      if(a[i]==s[j]&&i!=j)
      {
	printf("B");
	b_flag++;
      }
      /*
	 if(a[i]!=s[j])
	 printf("please input true number:");
       */


    }     
    if (a_flag == 0 && b_flag == 0)
      printf("0000\n");
  } 
  putchar(10);
}


int main(void)
{

  char  a[5];
  char  s[5];

  shuijishu(s,5);
  print_input(a,5);

  print_number(a,s,5);

  return 0;
}
