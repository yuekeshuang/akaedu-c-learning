#include<stdio.h>
int factorial(int n)
{
if(n==0)
return 0;
else
{
int res=factorial(n-1);
int result=n+res;
return result;
}
}
int main(void)
{
int n,c;
scanf("%d",&n);
c=factorial(n);
printf("%d\n",c);
//factorial(n);
//printf("%d\n",factorial(n));
return 0;
}
