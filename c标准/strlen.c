#include <stdio.h>
#include <string.h>

int main(void)
{
  int len, l;
  char src[128];
  gets(src);
  puts(src);
  len = strlen(src);
  printf("%d\n", len);
  l = sizeof(src);//sizeof 计算的是数组的元素个数 eg: 下标长度
  printf("%d\n", l);
  return 0;
}
