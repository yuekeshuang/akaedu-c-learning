#include<stdio.h>
int main()
{
int  i,s,j,k=0;
char n[20];
scanf("%s",n);
//printf("%s",n);
for(i=0;i<=20;i++)
{
if(n[i]>='a'&&n[i]<='z'||n[i]>='A'&&n[i]<='Z')
k++;
}
for(i=0;i<k;i++)
{
s=n[0];
n[0]=n[k-1];
n[k-1]=s;
}
printf("%s\n",n);
return 0;
