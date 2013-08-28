#include <stdio.h>

int main(void)
{
  FILE *fp;
  if ((fp = fopen("abc.c", "r")) == NULL) {
	  printf("can not open this file\n");
	  //errno?
	  exit(-1);
	}
  return 0;
}
