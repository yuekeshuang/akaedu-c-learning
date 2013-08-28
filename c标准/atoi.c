#include <stdio.h>
int main(int argc, char *argv[])
{
  int i, num;
  if (argc < 2) {
	  printf("./a.out num\n");
	  exit(-1); 
	}

  num = atoi(argv[1]);

  for (i = 0; i < num; i++)
	printf("hello\n");

  return 0;
}
