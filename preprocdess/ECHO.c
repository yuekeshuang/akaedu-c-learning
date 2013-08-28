#include <stdio.h>
#define ECHO(s)  \
do {            \
	gets(s);    \
	puts(s);    \
  } while(0)

int main (void) 
{
  char s[128];
  ECHO(s);
  return 0;
}
