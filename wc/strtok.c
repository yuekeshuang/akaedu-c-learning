#include <stdio.h>
#include <string.h>

int main(void)
{
	char buf[] = "abc<html><head><title>404 Not Found</title></head>";
	char *p;


	p = buf;
	p = strtok(p, "<");
	printf("%s\n", p);

	p = strtok(NULL, ">");
	printf("%s\n", p);

	return 0;

}
