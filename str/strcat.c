#include <stdio.h>
#include <string.h>

char *strcat(char *dest, const char *src)
{
  char *p = dest;
  char *s = src;
  int len ;
/*  for(; *p != 0; p++)
	;
  for( s = src; *s != '\0'; p++==s++) 
  *p = *s;
*/
  len = strlen(dest);
  p = p+len;

  for(s = src; *s != 0; p++ == s++)
	*p = *s;

 // return p;

}  
int main(void)
{
  char d[10] = "abc";
  char s[10] = "def";

  strcat(d,s);
  puts(d);
  putchar(10);

  return 0;
}
