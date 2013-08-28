#include <stdio.h>
#include <head.h>
int main(void)
{
  int n, m;
  scanf("%d%d", &n,&m);

  printf("%d\n", add(n, m));
  printf("%d\n", sub(n, m));
  printf("%d\n", mul(n, m));
  printf("%d\n", div(n, m));

  return 0;

}
