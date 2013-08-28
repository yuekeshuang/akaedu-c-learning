#include <stdio.h>

int main(void)
{
  int **ppi;

  ppi = (int **)0x1000;
//  ppi = (int **)0x100;
  ppi = (int **)0x804a000;

  printf("1finished\n");

  *ppi = 0x804a050;
  printf("2finished\n");
  **ppi = 0x2000;

  printf("3finished\n");

  return 0;
}
