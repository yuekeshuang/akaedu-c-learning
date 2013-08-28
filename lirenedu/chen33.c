#include"stdio.h"
struct student
{
	int score;
	char name[64];
};

void chose_s(struct student *a,int n)
{
	int i,j,max,t=0;
	int t2=0;
	//	char *p;
	struct student p;
	for(i=n;i>=2;i--)
	{
		max=0;
		for(j=1;j<i;j++)
		{
			if(a[max].score<a[j].score)
				max=j;
		}
		if(max!=i-1)
		{
			/*t2=a[max].score;
			  a[max].score=a[i-1].score;
			  a[i-1].score=t2;

			  p=a[max].name;
			  a[max].name=a[i-1].name;
			  a[i-1].name=p;*/
			p=a[max];
			a[max]=a[i-1];
			a[i-1]=p;//分数交换;
		}
	}
}

void print_s(struct student *p,int n)
{
	int i=0;
	printf("***************************************************\n");
	printf("****score******************name********************\n");
	for(i=0;i<5;i++)
	{
		printf("    %-5d                  %s\n",p[i].score,p[i].name);
	}
}
int main()
{
	int i=0;
	struct student a[5];
	printf("请输入成绩和姓名：\n");
	for(i=0;i<5;i++)
	{
		scanf("%d,%s",&a[i].score,a[i].name);
	}
	chose_s(a,5);
	print_s(a,5);

	return 0;
}
