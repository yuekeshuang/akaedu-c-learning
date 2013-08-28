#include <stdio.h>

struct record
{
  int line;
  char buf[64];
};
typedef struct record_t;
int main(int argc, char *argv[])
{
  FILE *fp;
 // char buf[128];
//  int line;
 // char max_buf[128];
//  int max;
  record_t max, tmp;
  printf("demo max line\n");

  fp = fopen(argv[1], "r");
  max.line = 0;
  while (1) {
	int ret;

	ret = fscanf(fp, "%d %s", &line, buf);
	printf("ret = %d\n", ret);
	printf("line: %d, buf : <%s>\n", tmp.line, tmp.buf );

	if(ret < 0 )
	  break;
	if(tmp.line > max.line)
	{
//	  max = line;
//	  strcpy(max_buf,buf);
	  max = tmp;
	}

  }

  printf("max line = %d, buf = <%s> \n", max.line , max.buf);
  fclose(fp);

  return 0;
}
