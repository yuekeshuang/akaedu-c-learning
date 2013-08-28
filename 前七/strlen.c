#include <stdio.h>
#include <string.h>
int main()
{
  char s[128];
  int len1, len2, len3;
  gets(s);
  len1 = strlen("abc");
  printf("len1 = %d\n", len1);
  len2 = strlen("");
  printf("len2 = %d\n", len2);
  strcpy(s, "abc");
  printf("s[] = %c\n",  s[0]) ;      // 之所以为abc 是因为打印的是abc\0所以..
 return 0; 
  
}

