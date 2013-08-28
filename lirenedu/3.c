#include<stdio.h>
struct score { int max;int min;float b;int sum;};
void info2(int *a,int n,struct score *s)
{
		 struct score *p=s;
		 int *q=a,i,j,max=0,min=0;
		 p->sum=0;
          for(i=0;i<n;i++)
				p->sum+=q[i];
		  (*p).b=(*p).sum/(1.0*n);
		  for(i=1;i<n;i++)
		  {
					 if(q[max]<q[i])
								max=i;
					 if(q[min]>q[i])
								min=i;
		  }
		p->max=q[max];//(*p).max=q[max];
		p->min=q[min];// (*p).min=q[min];
		  return ;

}
int main()
{
		  int a[5]={5,4,2,1,3};
		  struct score s1,s2;
		  info2(a,5,&s2);
		  printf("%d %d %f %d",s2.max,s2.min,s2.b,s2.sum);
		  return 0;

}
