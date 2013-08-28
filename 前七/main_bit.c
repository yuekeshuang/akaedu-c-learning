#include <stdio.h>
int main()
{
	unsigned int a, b, mask = 0x0000ff00;
	a=0x12345678;
//	scanf("");
	b = a &~mask;
	printf("%x\n", b);
	return 0;
  }

