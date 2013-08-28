#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  char ch;
  fp = fopen("file1.txt", "w");
  if(fp == NULL) {
	  printf("can not open file\n");
	  exit(0);
	}
  while ((ch = getchar()) != '#')
	fputc(ch, fp);
  fclose(fp);
  return 0;
}
