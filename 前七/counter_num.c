/*
#include <stdio.h>
#include <math.h>
int counter_num(int n, int max)
{
	int i;
	double c;

	for(i = 0; i <= max; i++) {
		c = pow(10,i);
		if(max/c > 0 && max/c <= 9)
			break ;
	  }
	
	return i;
  }

  int main()
  {
	int n, max;
	int x, i;
	int s=0;
	printf("请输入两个整数:\n");
	scanf("%d %d %d", &n, &max, &x);
	i = counter_num(n, max);
	s = pow(10,i-1)*i;
	printf("%d的个数:%d\n", x, s);
	return 0;

	}
	*/

#include <stdio.h>
int main()
{

	int i, x;
	int a, b, n, m;
	int count = 0;
	printf("请输入两个整数m,n以及数字x:\n");	
	scanf("%d %d %d", &m, &n, &x);	
	 
	for (i = m; i <= n; i++) {
		a = i%10;
		b = i/10;

//	scanf("%d %d %d", &m, &n, &x);	
	  
		if(a == x)
		  count++;
		if(b == x)
		  count++;
	}
	
	printf("在 %d 和 %d 范围内出现 %d 的个数为:  %d\n", m, n, x, count);
	return 0;
}
