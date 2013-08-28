#include <stdio.h>
int main(void)
{
  chr s[128];
  gets(s);
  SWITCH ("abc")
  {
	CASE "abc"
		printf("this is abc\n");
		BREAK; 
	CASE "123"
		printf("this is 123\n");
		KBREAK;
		DEFAULT:
		
  }
  return 0;
}
