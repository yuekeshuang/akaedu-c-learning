#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char str[100];
  char *p;
  char *q = &argc;
  fgets(str, sizeof(str), stdin);
//  gets(str);

//  for (; *q != 0; q++)
 // printf("%p\n", q);
  printf("%s\n", strtok(str, ";"));
  while (p = strtok(NULL, ";"))
	printf("%s\n", p); 

  return 0;
}



