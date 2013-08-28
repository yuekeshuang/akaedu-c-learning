#include<stdio.h>
#include<string.h>
struct student{
      char name[10];
      int  id;
      char sex;
};
int main()
{
	struct student a[3];
	int i;
	int len;
	char s[100];
	for(i=0;i<3;i++)
	{
	   printf(" please intput name:\n");
	    fgets(s,sizeof(s),stdin);
	    len=strlen(s);
	    s[len-1]='\0';
	    strcpy(a[i].name,s);
	    fgets(s,sizeof(s),stdin);
	    len=strlen(s);
	    s[len-1]='\0';
	    a[i].id=atoi(s);
	    fgets(s,sizeof(s),stdin);
	    a[i].sex=s[0];

	
	}
	for(i=0;i<3;i++)
	printf("%s %d %c\n",a[i].name,a[i].id,a[i].sex);
	return 0;




}

