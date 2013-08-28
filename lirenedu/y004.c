#include<stdio.h>

void print_arr(int*a,int n);
void bubble_sort(int*a,int n)
{
             int i,j,temp;
			 for(i=n;i>=2;i--)
	{
			         for(j=0;j<=i-2;j++)
                         if(a[j]>a[j+1])
						 {
						 temp=a[j+1];
                         a[j+1]=a[j];
						 a[j]=temp;
                         }
}
     }
int main()
{
   int a[10]={4,5,1,7,2,6,8,4,3,0};
   bubble_sort(a,10);
   print_arr(a,10);

}

void print_arr(int*a,int n)

{
   int i;
   for(i=0;i<n;i++)
   printf("%d",a[i]);
   putchar(10);
}
