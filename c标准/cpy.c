#include <stdio.h>
#include <string.h>

int main(void)
{
  //char bug+1[100];
  char buf[20] = "hello world\n";
  memcpy(buf+1, buf, 13);
  printf(buf);
//  memmove(buf+1, buf, 13);
//  printf(buf);
  strncpy(buf+1, buf,13);
  printf(buf);
//  strcpy(buf+1, buf,13);
 // printf(buf);
  putchar(10);
  return 0;
}
