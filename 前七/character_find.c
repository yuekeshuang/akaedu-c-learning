#include<stdio.h>
int character_find(char *s, char a)
{ 
  char *p = s;

  for(;*p != '\0'; p++) {
    if(*p == a)  {
        printf("Yes\n");
      return   ;      // 为何写成return 1;后就不正确了？ 
      }
      //return 1;
    else //(*p != a&& *p != '\0')
      ;

  } 
  printf("No\n");
}

int main(void)
{
  char str[128];
  char a = 'h';
  gets(str);
  character_find(str,a);

  return 0;
}
