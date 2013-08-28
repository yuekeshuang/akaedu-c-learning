/*#include <stdio.h>
int main()
{
	unsigned char c = 0xfc;
	unsigned int i = ~c;

	printf("demo promotion\n");
	printf("c = 0x%x  i = 0x%x\n", c, i);
	return 0;
  }
*/
#include <stdio.h>
int main()
{
	int a = 11, b = 5;
	unsigned char c = 0xf5;
	printf("%d\n", c);
	printf("%d, %d\n", a&b, a&&b);
	return 0;

  }
