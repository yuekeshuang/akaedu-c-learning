#include <stdio.h>

#define N 16
#define MAX 100

void init_array(int a[], int len)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < len; i++)
		a[i] = rand()% MAX;
}

void show_array(int a[], int len)
{
	int i;
	for (i = 0; i <len; i++)
		printf("%3d", a[i]);
	putchar('\n');
}

void swap(int *a, int *b) //转换
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble_sort(int a[], int len)
{
	int i, j;
	for (i = 2; i < len; i++ )
	//	for (j = len -1; j > i; j--)
	//		if(a[j-1] > a[j])
	//			swap(&a[j-1], &a[j]);
		for (j = 0; j <= len-i; j++)
			if (a[j] > a[j+1])
				swap(&a[j], &a[j+1]);
}

int main(void)
{
	int a[N];
	init_array(a, N); 
	show_array(a, N);
	bubble_sort(a,N);
	show_array(a, N);

	return 0;	
}
