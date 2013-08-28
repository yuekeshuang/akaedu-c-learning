#include <stdio.h>   
#define  OFFSET(member)  (&(((struct test *)0x0)->member)) 
struct test{
	char a;
	char d;
	short b;
	int  c;
  }__attribute__((packed)) s ;
/*struct{
	char a;
	char d;
	short b;
	int  c;
  }_attribute_((packed))s ;
*/
int main(void)
{
printf("%d\n", sizeof(s));
printf("%p\n", OFFSET(c));
return 0;
}
