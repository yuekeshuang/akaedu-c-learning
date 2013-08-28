#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp = fopen("abc", "r");
  if (fp == NULL) {
	  perror("Open file abc");
	  printf("error open the file abc\n");
	  printf("errno:%d\n", errno);
	  exit(1);
	}

  return 0;
}
