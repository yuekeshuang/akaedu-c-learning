#include <stdio.h>
#include <math.h>
void is_prime(int n)
{
  int i, j;
  double k; 
  int count = 0;
  int flag = 0;
  int x;
  for(i = 2; i <= n; i++){
	flag = 1;
//	for(j = 2; j <= i; j++){
//	  if(i % (j/2) == 0){
  for(j = 2; j <= i/2; j++){
	if(i%j == 0){
		flag = 0;
		break;
	  }
	}

	if(flag){

	count++;
	  printf("%3d", i);

	if(count%10 == 0)
	  putchar(10);
	}
  }	
}

int main(void)
{

  int n;
	  //for(f = 2 ; t <= i; t++)
  printf("请输入一个整数:\n");
  scanf("%d", &n);
  //printf("2—n之间的所有素数为:\n");    //*******************如何把n变成数值？
  is_prime(n);
  putchar(10);
  return 0;
}
