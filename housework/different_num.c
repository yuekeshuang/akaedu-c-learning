#include <stdio.h>
int different_num(int n)
{
  int i, j, k;
  int count = 0;
  for(i = 1; i <= n; i++){
	for(j = 1; j <= n; j++)
	  for(k = 1; k <= n; k++){
		if(i != j&& i != k&& j != k){
		  count++;
		printf("%2d%2d%2d\n", i, j, k);
		}
	  }
  }

  printf("%d\n", count);
  return ;
}
int main(void)
{
  int n;
  printf("请输入一个整数:\n");
  scanf("%d", &n);
  different_num(n);
  return 0;
}
