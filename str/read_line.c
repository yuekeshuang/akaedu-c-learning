/*#include <stdio.h>
int read_line(char str[], int n)
{
  char ch;
  int i = 0;
  while ((ch = getchar()) != 10)
	if (i < n)
	  str[i++] = ch;
	str[i] = 0;
	return i;
}
int main(void)
{
//  char *s = "adlka";

  char p[5] = "abcde";
  read_line(p,5);
  return 0;
}*/
#include <stdio.h>
//int count_spaces(const char s[])
void count_spaces(const char s[])
{
  int count = 0;
  int i;
  for(i = 0; s[i] != 0; i++)
	if(s[i] == ' ')
	  count++;
  printf("%d\n", count);
  //return count;
  return ;
}

int main(void)
{
  char s[128];
  gets(s);
  count_spaces(s);
//  printf("%d\n", count_spaces(s));
  return 0;
}
