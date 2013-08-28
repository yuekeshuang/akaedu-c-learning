int max_arr(int a[],int n)
{
int max=a[0],i;
for(i=1;i<10;i++)
{
if(a[i]>=max)
max=a[i];

}
return max;
}
#include<stdio.h>
int max_arr(int*,int);
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
printf("max=%d\n",max_arr(a,10));
return 0;
}
