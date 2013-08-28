#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int i,l;
scanf("%s",a);
l=strlen(a);
for(i=l-1;i>=0;i--)
printf("%c\n",a[i]);
return 0;

}
