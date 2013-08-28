#include <stdio.h>
#define N 16
#define MAX 10

void init_array(int a[], int len)
{
	int i;
	srand(time(NULL));

	for (i = 0; i < 16; i++)
		a[i] = rand() % MAX;
}

void show_array(int a[], int len)
{
	int i;
	for (i = 0; i < len; i++) {
		printf("%3d", a[i]);
	}
	putchar(10);
}

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void insert(int a[], int len)
{
	int i, j;
	for (i = 0; i < len-1; i++) //i什么时候取值 len-1/len-2 ?   i = 0 / 1  ?
		for (j = i; j >= 0; j--)
			if (a[j] > a[j+1])
				swap(&a[j], &a[j+1]);
}

int main(void)
{
	int a[N];
	init_array(a, N);
	show_array(a, N);
	insert(a,N);
	show_array(a, N);

	return 0;
}
