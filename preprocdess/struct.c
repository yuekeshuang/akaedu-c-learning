#include <stdio.h>
//#pragma pack(2)
struct test
{
  char b;
  int  a;
  int  c;
};
int main(void)
{
  printf("sizeof = %d\n",sizeof(struct test));
  return 0;
}
