#include<stdio.h>
int main()
{
int b,i,a[10]={2,4,6,7,3,22,3,1,13,11} ,max ;
//scanf("%d",&a[10]);
max=a[0];
for(i=1;i<10;i++)
{
if(a[i]>=max)
//a[i-1]=a[i];
max=a[i];
//else
//max=a[0];
}
printf("%d\n",max);
return 0;


}
