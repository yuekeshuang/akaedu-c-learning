#include <stdio.h>

void parse(char *buf, int *argc, char *argv[])
{
  char *p = buf;
  *argc = 0;	// ?
  int flag = 0;

  while (*p) {
	if (flag == 0 && (*p) != ' ' && (*p) != '\n') {
	  argv[*argc] = p;
	  (*argc)++;

	  flag = 1;
	}
	else
	  if(flag == 1 && (*p ==' ' || *p == '\n')) {
		*p = '\0';
		flag = 0;
	  }

	p++;
  }

  argv[*argc] = NULL;	// ?
  return ;
}

//int main(int argc, int argv[])
int main(void)
{
  int i = 0;
  char *p;
  char buf[64];
  int argc = 0;
  char *argv[8] ;

  printf("demo argc argv\n");

  while(1) {
	printf("myshell$$:\n");
	fgets(buf, 64, stdin);
	printf("buf = <%s\n", buf);

	parse(buf, &argc, argv);

	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++) {
	  printf("argv[%d] = <%s>\n", i, argv[i]);
	}
	//	if (strcmp(argv[0], "add") == 0)
  }

  return 0;
}

