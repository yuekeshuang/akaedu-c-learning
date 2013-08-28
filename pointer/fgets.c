#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  char ch;
  fp = fopen("file1.txt", "r");
  if(fp == NULL) {
	  printf("can not open file\n");
	  exit(0);
	}
  ch = fgetc(fp);
  while (ch != EOF) {
	putchar(ch);
	ch = fgetc(fp);
  }
  fclose(fp);
  return 0;
}
