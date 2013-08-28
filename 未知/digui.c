#include <stdio.h>
int fun(int n)
{
	if (n == 0)
		return 0;
	else
		return n+fun(n-1);
}

int main(void)
{
	 int i, result;
	 result = fun(10);
	 printf("%d\n", result);

	 return 0;
		

}
