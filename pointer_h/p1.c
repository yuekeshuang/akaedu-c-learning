#include <stdio.h>

int main(void)
{
  int (*a)[5];
  int i;
  for(i = 0; i < 5; i++) {
//	printf("%p\n", a+1);
	printf("%p\n", a+i);
	
//	printf("%p\n", &a);

  }

  return 0;

}
