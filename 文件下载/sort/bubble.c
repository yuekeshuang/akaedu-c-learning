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

#if DUBUGE
void select_sort(int a[], int len)
{
	int i, j, min;
	for (i = 0; i < len; i++) {
		min = i;
		for (j = i+1; j < len; j++)
			if (a[min] > a[j])
				min = j;
		swap(&a[min], &a[i]);
	}
}

#endif

void bubble_sort(int a[], int len)
{
	int i, j;
	for (i = 0; i < len; i++) {
		for (j = 0; j < i-1; j++)   //遍历一遍
			if (a[j] > a[j+1])
				swap(&a[j], &a[j+1]);
	}
}

int main(void)
{
	int a[N];
	init_array(a, N);
	show_array(a, N);
	//select_sort(a, N);
	bubble_sort(a, N);
	show_array(a, N);

	return 0;
}
