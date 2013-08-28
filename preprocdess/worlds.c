#include <stdio.h>
//#define STR "hello,"\
	"world"
#define STR "hello,\ 
	                   world"
int main(void)
{
  printf("hello,world\n");
  return 0;
}
