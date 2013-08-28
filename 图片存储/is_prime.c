#include <stdio.h>
#include <math.h>
int is_prime(int n, int m);
int main()
{
  int n, i, m, s = 0;
  printf("请输入一个整数:\n");
  scanf("%d%d", &n, &m);
  //  if(is_prime(n))  //隐含了如果表达式是真即1 则返回n值
  is_prime(n,m);
  putchar(10);
  return 0;

}

int is_prime(int n, int m)
{
  int i, j, flag = 1;
  int count = 0;

  for(j = n; j <= m; j++) {

	for(i = 2; i < j; i++) 
	  if(j % i  == 0) {
		flag = 0;
		break;
	  }
	  else 
		flag = 1;
	if(flag == 1) {
		printf("%5d", j);
		count++;		
	if(count % 10 == 0)
		putchar(10);
	}
	
  }

		putchar(10);
}
