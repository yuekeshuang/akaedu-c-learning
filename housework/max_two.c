#include <stdio.h>
int max(int m, int n)
{
  int x;
  if(m >= n)
	x = m;
  else
	x = n;
  return x;
}
int main(void)
{
  int m, n;
  printf("请输入两个数:\n");
  scanf("%d%d", &m, &n);
  max(m, n);
  printf("%d\n", max(m ,n));
  return 0;
}
