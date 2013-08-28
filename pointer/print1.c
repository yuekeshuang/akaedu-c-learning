#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE * fp;
  int i;
  char buf[128];
  char *p = buf;

   fp = fopen("abc", "r");
  while ( fp == NULL) {
	  printf("can not open file\n");
	  exit(-1);
	}
  fgets(buf, 128, fp);
  for(; *p != '\0'; p++ ) {
	if(*p != ' ')
	  putchar(*p);
	else  {
	  if (*(p+1) != ' ')
		putchar(' ');
	  else
		;

	}

  }

  putchar(10);
  return 0;
}
