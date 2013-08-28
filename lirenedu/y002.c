#include<stdio.h>
void print_arr(int*a,int n);
void insert_sort_1(int *a,int n)
{
//int temp=a[n-1];
int i,j;
int temp;
for(i=2;i<=n;i++)//n是个数
{  
   temp=a[i-1];// 相当于i重新分成一个数组即i相当于n
     for(j=i-2;j>=0;j--)
	 {
	     if(a[j]>temp)
		 a[j+1]=a[j];
		 else
		 break;
	 }
	     a[j+1]=temp;
}
/*for(i=n-2;i>=0;i--)
{
if(a[i]>temp)
a[i+1]=a[i];
else
break;
}
a[i+1]=temp;
*/
}



int main()
{
int s[10]={8,1,5,3,7,5,4,6,7,0};
int i;
/*insert_sort_1(s,2);
insert_sort_1(s,3);
insert_sort_1(s,4);
insert_sort_1(s,5);
insert_sort_1(s,6);
insert_sort_1(s,7);
insert_sort_1(s,8);
insert_sort_1(s,9);
*/
insert_sort_1(s,10);



/*
//print_arr(a,10);
printf("%d\n",s[10]);*/
print_arr(s,10);
return 0;
}



void print_arr(int*a,int n)
{
int i;
for(i=0;i<n;i++)
printf("%d ",a[i]);
putchar('\n');
}

