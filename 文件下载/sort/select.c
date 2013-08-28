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
//	int count = 0;
	for (i = 0; i < len; i++) {
		printf("%3d", a[i]);
//		count++;
//		if (count % 10 == 0)
//		putchar(10);
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

void select_sort(int a[], int len)
{
	int i, j, min;
	for (i = 0; i < len; i++) {
		min = i;
	for (j = i+1; j < len; j++)
		if (a[min] > a[j])
			min = j;//for 遍历一遍后求出了最值
	swap(&a[min], &a[i]);
	}
}

int main(void)
{
	int a[N];
	init_array(a, N);
	show_array(a, N);
	select_sort(a, N);
	show_array(a, N);

	return 0;
}
