#include <stdio.h> 
#include <string.h> 
int main(void)
{
  int len;
  char str[7] = "hello\n";

  len = strlen(str);
  printf("%s", str);
  printf("%d\n", len);
  
  return 0;

}
