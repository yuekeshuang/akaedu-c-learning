#include<stdio.h>
int main()
{
long i,a,b,c=0,d,e;
for(i=10000;i<=99999;i++)
{
e=i%10;
d=(i/10)%10;
b=(i/1000)%10;
a=i/10000;

if(a==e&&b==d)
{
printf("%ld  ",i);
c++;
if(c%10==0)
printf("\n");
}
}
return 0;

}
