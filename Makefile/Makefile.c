#include <stdio.h>
#include "head.h";
int main(void)
{
  int m = 3, n = 8;
//  scanf("%d%d", &m, &n);
  printf("%d\n", sub(m, n)); 
  printf("%d\n", add(m,n));
  return 0;
}
