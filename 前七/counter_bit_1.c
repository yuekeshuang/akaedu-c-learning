#include <stdio.h>
int count_bit_1(int num)
{
	int counter = 0;
	int i=0;
	for(i=0; i != 32; i++)
	{
	  if(num & (1 << i))
		counter++;
	}
	return counter;
  }
int main()
{
	int ret=0;
	int sum=0;
	int num,max;
	scanf("%d %d", &num, &max);
	for(; num <= max; num++)

//	printf("demo count bit 1\n" );
	ret+=count_bit_1(num);
	printf("%d bit 1\n", ret);
	return 0;
  }
