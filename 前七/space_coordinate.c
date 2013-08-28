/*#include<stdio.h>
  void space_coordinate(char *s)
  {
  char *p = s;
  for(;*p != '\0';p++) {
  if(*p == ' ') {
//	   putchar(p);

printf("%d",p);
break;
}
else
;

printf("%d",p);
}

putchar(10);
}


int main(void)
{
char p[128];
int c;
gets(p);
c=space_coordinate(p);
printf("%d\n",c);
return 0;
}
 */

#include<stdio.h>
void space_coordinate(char *p, int n) 
{
  int i;
  for(i=0; p[i] != '\0'&& i < n;i++) {
    if(p[i]== ' ') {
      //	   putchar(p);

      printf("空格位置:  在第%d个字符上\n",i+1);
      //           break;
      return  ;
    }
    else
      ;

    //	printf("%d",i);
  }

  printf("结束符位置:  在第%d个字符后\n",i);

  putchar(10);
}


int main(void)
{
  char p[128];
  int c;
  gets(p);
  space_coordinate(p,128);
  return 0;
}
