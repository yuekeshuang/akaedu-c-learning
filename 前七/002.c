#include<stdio.h>
#include<string.h>
struct student{
char name[10];
int score;
char sex;
};
int main()
{
	int i;
	struct student c={"zhang",60,'m'};

	struct student a[3];
	for(i=0;i<3;i++)
		scanf("%s %d %c",a[i].name,&a[i].score,&a[i].sex);

	for(i=0;i<3;i++)
	printf("%s,%d,%c\n",a[i].name,a[i].score,a[i].sex);
 	return 0;
/*	struct student a={"zhou",80,'m'};

	strcpy(b.name,"yue");
	b.scoer=100;
	b.sex='m';	
  */
	


}
