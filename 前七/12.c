/*#include<stdio.h>
int main(void)
{
int n,i,s=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
   s=s*i;
printf("%d\n",s);
return 0;

}
*/
#include<stdio.h>
int factorial(int n)
{
if(n==1)
return 1;
else
{
int res=factorial(n-1);
int result=n*res;
return result;
}
}

int main(void)
{
int n;
scanf("%d",&n);
factorial(n);
printf("%d\n",factorial(n));
return 0;
}

