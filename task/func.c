#include <stdio.h>

#include "public.h"

stdu_t students[40];
int num = 0;

void load_file(char *filename, stu_t * p)
{
	FILE *fp;

	printf("loading file %s\n", filename);

	fp = fopen(filename, "r");

	int i = 0;
	while (1)
{
	int ret;
	char buf[256] = "";
	char * p;

	p = fgets(buf, 256, fp);

//此刻ret的作用以及代表什么？	ret = sscanf(buf, "%s %s %d %s %s %s %s %s",
	students[i].name,
	students[i].cname,
	&students[i].age,
	students[i].gender,
	students[i].native,
	students[i].qq,
	students[i].email,
	students[i].hobby);

		i++;

		printf("ret = %d\n", ret);
		printf("line: %d, buf : <%s>\n", i, buf);

		if (p == NULL)
			break;
}

	num	= i;
	printf("all students is %d\n", num);

	return ;
}

int cmp_name(void *s1, void * s2)
{
	return 0;
}

int cmp_age(void *s1, void *s2)
{
	return 0;
}

void list_all(void)
{
	int i = 0;

	// while (students[i].name != NULL)
	for (i = 0; i < num; i++)
	{
		printf("student i info: %s\n", student[i].name);

		i++;
	}
}

void sort_by_name(void)
{
	qsort(students, 35, sizeof(stu_t), cmp_name);

	list_all();

	return ;
}

void sort_by_age(void)
{
	qsort(students, 35, sizeof(stu_t), cmp_age);
	list_all();

	return ;
}


int load(int argc, char *argv[])
{
	printf("load cmd\n");

	load_file(argv[1], students);

	return 0;
}

int list(int argc, char *argv[])
{
	printf("list cmd\n");

	list_all();

	return 0;
}

int sort(int argc, char *argv[])
{
	printf("sort cmd\n");

	if (strcmp(argv[1], "name") == 0)
		sort_by_name();

	if(strcmp(argv[1], "age") == 0)
		sort_by_age();

	return 0;
}

void find_native(char * native)
{
	return;
}

void find_hobby(char *hobby)
{
	return ;
}

int find(int argc, char *argv[])
{
	printf("find cd\n");

	if (strcmp(arg[1], "native") == 0)
		find_native(argv[2]);

	if (strcmp(argv[1], "hobby") == 0 )
		find_hobby(argv[2]);

	return 0;
}
