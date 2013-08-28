#include <stdio.h>
int main(void)
{
  int i;
  char *q;
  char *p = malloc(1);
  *p = 'a';
  
  for (i = 1; i <= 10; i++) {
	  p = realloc(p, i+1);
	  *(p+i) = *(p+i-1) + 1;
	}
	p = realloc(p, i+1);// 打印结果为abcdefghijk
	*(p+i) = '\0';
	printf("%s\n", p);
	free(p);//释放掉原有指针？

	return 0;
}
