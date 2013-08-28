#include<stdio.h>

int gcd(int m, int n)
{
  int i;

  for(i = m > n ? n:m; i > 0; i--)
	if(m%i == 0 && n%i == 0)
	  return i;
}
int main(void)
{
  int m, n, i;
  
  printf("请输入两个数:\n");
  scanf("%d%d", &m, &n);
  i = gcd(m,n);  //因为返回的是变量不是值不能用等于号只能用赋值
  printf("%d\n", i);
  //printf("%d\n", gcd(m,n));
  
  return 0;
}
