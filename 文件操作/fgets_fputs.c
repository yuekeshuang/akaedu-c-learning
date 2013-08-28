#include <stdio.h>

int main(void)
{
  char src[100];
  
  fgets(src, sizeof(src), stdin);
  fputs(src,stdout);

  return 0;
}
