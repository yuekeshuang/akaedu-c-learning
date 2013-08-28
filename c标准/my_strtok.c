#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*char *mystrtok(char *str, const char *delim)
{
  
}

int main(int argc, char *argv[])
{
  char str[128] = "hello;world";
  char *p;
  printf("%s\n",strtok(str,";"));
//  putchar(10);
  while (p = strtok(NULL,";"))
	printf("%s\n",p);

  return 0;
}
*/

int main(int argc, char *argv[])
{
  char str[128];
  gets(str);
  char *p = str;
  for (; *p != '\0'; p++){
	  if(*p != ',')
		putchar(*p);
	  else
		putchar(10);
	}
  //printf("%s\n",strtok(str,";"));
 // while (p = strtok(NULL,";"))
//	printf("%s\n",p);

  putchar(10);
  return 0;
}
