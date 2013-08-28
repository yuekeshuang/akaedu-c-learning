#include<stdio.h>

void my_strcat(char *dest, char *str);

int main()
{
  //char *p, *s;
  char p[128], s[128];
//  gets(p);
 // gets(s);
 scanf("%s%s",p,s);
  my_strcat(p,s);
 // putchar(10);
  puts(p);
//  putchar('\n');
  return 0;
}

void my_strcat(char *dest, char *str)
{
  char *p, *s;
  p = dest;
  s = str;
  for(;*p != '\0'; p++)
    ;
  //p=s;
  //for (;*s! = '\0';s++, p++)
   // *p=*s;
  for (; *s != '\0'; )
    *p++ = *s++;
  *p = '\0';
 // puts(p);//此处不能用puts(p)输出，因为此刻指向的是结束字符地址，不是首地址  
  //putchar(10);
}
