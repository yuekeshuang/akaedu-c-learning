#include <stdio.h>
int max(int *a, int n)
{
  int i;
  int temp;

  for(i = 0; i < n-1; i++){
	if(a[i] >= a[i+1]){		//if不加{}如何理解？ 
	  temp = a[i];
	  a[i] = a[i+1];
	  a[i+1] = temp;
	}

  }
  return a[n-1];
}
int main(void)
{
  int i, n, a[128];
  printf("请输入一个数:\n"); 
  scanf("%d", &n);
  printf("请输入%d个数:\n", n); 

  for(i = 0; i < n; i++)
	scanf("%d", &a[i]);
  max(a, n);
  printf("%d\n", a[n-1]);

  return 0;
} 

