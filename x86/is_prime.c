#include <tdio.h>
#include <string.h>
void is_prime(int n)
{
  int i, j;
  int k, flag = 0;
  for(i = 2; i <= n; i++){
	for(j = 2; j <= i; j++){
		k = sqrt(i);
		if(i/k !=0)
		  flag = 1;
		else{
		  flag = 0;
		  break;
		}
	  }
	if(flag == 1)
	  printf("%d\n", i);
  }	
}

int main(void)
{

  int n;
  printf("请输入一个整数:\n");
  scanf("%d\n", &n);
  is_prime(n);
  putchar(10);
  return 0;
}
