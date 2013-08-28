#include <stdio.h>

int main()
{
  FILE *fp;
  char ch;
  if((fp = fopen("file.txt", "w")) != NULL) {
	  printf("can not open file\n");
	  exit(0);
	}
  while ((ch = getchar()) != '#')
	fputc(ch, fp);
  fclose(fp);
  return 0;
}
