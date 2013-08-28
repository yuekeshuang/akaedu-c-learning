#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  char str[81];
  fp = fopen("file2", "r");

  if(fp == NULL) {
	printf("Can not open file\n");
	exit(0);
  }

  while ((fgets(str, 81, fp)) != NULL)
  fputs(str, stdout);
  fclose(fp);

  return 0;
}
