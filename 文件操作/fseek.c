#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  char ch;
  char buf[1024];
  int len;
  if(argc < 2) {
	  printf("./a.out file\n");
	  exit(-1);
	}
  fp = fopen(argv[1], "w+");
  while ((ch = fgetc(stdin)) != EOF)
	fputc(ch, fp);
  fseek (fp, 0, SEEK_SET);
  while (len = fread(buf, 1, sizeof(buf), fp))
	fwrite(buf, 1, len, stdout);
  fclose(fp);

  return 0;
}
