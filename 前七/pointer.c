#include <stdio.h>
const int myconst[100] = {300};
static int mystatic = 400;
int global = 200;
int main(void)
{
  int local = 100;
  

  printf("&local =  %p\n", &local);
  printf("&global = %p\n", &global);
  printf("main =    %p\n", &main);
  printf("&myconst = %p\n", &myconst);
  printf("&mystatic = %p\n", &mystatic);
  printf("const string = %p\n", "world");

  return 0;
}
