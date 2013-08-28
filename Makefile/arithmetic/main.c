/*main.c*/
#include <stdio.h>
#include "head.h"
int main(void)
{
  int a, b;
  printf("请输入两个数:\n");
  scanf("%d%d", &a, &b);

  printf("%d\n", add(a,b));
//  printf("%d\n", sub(a,b));
 // printf("%d\n", mul(a,b));
  //printf("%d\n", div(a,b));

return 0;

}
