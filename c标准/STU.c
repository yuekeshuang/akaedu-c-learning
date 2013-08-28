#include <stdio.h>
#include <stdlib.h>
struct STU{
	char name[10];
	int id;
	char sex;
  };

int main(void)
{
  char *p;
  //po = malloc(60);
  p = calloc(3, sizeof(struct STU))
  free(p);
  return 0;
}
