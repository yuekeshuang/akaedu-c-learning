#include<stdio.h>
void print_arr(int*a,int n);
void chose_sort(int *a,int n)
{
     int i,j,max;
	 int temp;
	 for(i=n;i>=2;i--)
	 {
	      max=0;
		  for(j=1;j<i;j++)
		      {
			        if(a[max]<=a[j])
					max=j;
			  }
		  if(max!=i-1)
		    {
		  temp=a[i-1];
		  a[i-1]=a[max];
		  a[max]=temp;
		    
			}

     }

}
int  main()
{
    int a[10]={2,1,5,9,4,7,5,3,4,8};
    chose_sort(a,10);
	print_arr(a,10);
	return 0;

}

void print_arr(int*a,int n)
{
     int i;
	 for(i=0;i<n;i++)
	    printf("%d",a[i]);
		putchar(10);

}

