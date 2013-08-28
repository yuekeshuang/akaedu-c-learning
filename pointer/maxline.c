#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  char str[1024];
  char string[1024];
  char *p;
  int len;
  int max = 0;

  fp = fopen(argv[1], "r");
  while ( fgets(str, 1024, fp)) {
	p = strtok(str, " ");
	len = atoi(p);
	p = strtok(NULL, " ");

	if(len > max) {
	  max = len;
	  strcpy(string, p);
	}

  }
  //printf("%d\n", max);

  // while (p = strtok(NULL, " ")) {
  //	printf("%s\n", p);
  //}
  //  fputs(str, stdout);
  fclose(fp);

  return 0;
}
