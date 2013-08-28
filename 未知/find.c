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

int search(int a[], int l, int r, int key)
{
	int m;
	while (l <= r) {
		m = (l+r)/2;
		if (key > a[m])
			l = m+1;
		else if (key < a[m])
			r = m-1;
		else return 1;
	}
	return 0;
}

int search_r(int a[], int l, int r, int key)
{
	if (l > r)
		return 0;
	int m = (l+r) / 2;
	if (key > a[m])
		return search_r(a, m+1, r, key);
	if (key < a[m])
		return search_r(a, l, m-1, key);
	else 
		return 1;
}

int main(int argc, char *argv[])
{
	int a[N], key;
	init_array(a, N); 
	show_array(a, N);
	search(a, 0, N, key);
	search_r(a, 0, N, key);
	show_array(a, N);

	return 0;	
}
