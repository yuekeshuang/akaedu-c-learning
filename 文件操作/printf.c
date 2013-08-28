#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, int argv[])
{
  FILE *fpsrc, *fpdest;
  char ch;
//  char *argv[1] = "afdld";
 // char *argv[2] = "jjjjjj";
  if (argc < 3) {
	  printf("./a.out src dest\n");
	  exit(-1);
	}

 // printf("errno = %d\n", errno);
  fpsrc = fopen(argv[1], "r");
  if (fpsrc == NULL) {
	perror("fopen src");
	exit(-1);
  }
  fpdest = fopen(argv[2], "w");
  if (fpdest == NULL) {
	perror("fopen dest");
	exit(-1);
  }
  while ((ch = fgetc(fpsrc)) != EOF)
	fputc(ch, fpdest);

  fclose(fpsrc);
  fclose(fpdest);

  return 0;
}
