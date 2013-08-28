#include <stdio.h>

void parse(char *s, char *buf, int *argc, char *argv[])
{
  char *p = buf;
  char *q = s;
  *argc = 0;	// ?
  int flag = 0;

  while (*p) {
	if (flag == 0 && (*p) != ' ' && (*p) != '\n') {
	 // argv[*argc] = p;
	 // (*argc)++;
	 *q++ = *p;

	  flag = 1;
	}
	else if(flag == 1 && (*p ==' ' || *p == '\n')) {
		//*p = '\0';
		flag = 0;
		*q++ = *p;
	  }
	  
	else 
	   if (flag == 1 && (*p !=' ' || *p == '\n'))  {
		flag = 0;
		*q++ = *p;
	  }
	p++;
  }

  //argv[*argc] = NULL;	// ?
//  printf("%s\n", s);
  return ;
}

//int main(int argc, int argv[])
int main(void)
{
  int i = 0;
  char *p;
  char *q;
  char *str;
  char buf[64];
  int argc = 0;
  char *argv[8] ;

  printf("demo argc argv\n");

  while(1) {
	printf("myshell$$:\n");
	fgets(buf, 64, stdin);
	printf("buf = <%s>\n", buf);

	parse(str, buf, &argc, argv);

//	puts(q);

//	printf("argc = %d\n", argc);
//	for (i = 0; i < argc; i++) {
//	  printf("argv[%d] = <%s>\n", i, argv[i]);
//	}
	//	if (strcmp(argv[0], "add") == 0)


  }

  return 0;
}
