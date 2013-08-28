#include <stdio.h>
#include <string.h>
int main()
{
  char str[128] = "hello world";
  printf("str = %s\n", str);
  memcpy(str+1, str, 6);
  printf("%s\n",str);
  return 0;
}
