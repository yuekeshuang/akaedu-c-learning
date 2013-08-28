#include <stdio.h>

int main(void)
{
	int i = 5;
	int *p;
	p = &i;
/*
	scanf("%d", &i);
	scanf("%d", p);
	scanf("%d", &p);
*/
	printf("%d\n", i);
	printf("%d\n", p);
	printf("%d\n", &p);

	return 0;
}
