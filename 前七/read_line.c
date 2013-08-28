#include <stdio.h>
int main(void)
{
  char ch;
  char a[128];
  gets(a);
  /*while(1) {
	  char *p;
	  p=fgets(buf, 128, stdin);
	  if(p == NULL)
		break;
	  puts(buf);

	}
*/

	int i = 0;
	while (a[i] != 0) {
		if(a[i] >= 'a'&& a[i] <= 'z'||a[i] >= 'A'&& a[i] <= 'Z')
			putchar(a[i]);
		if(a[i] != (a[i] >= 'a'&& a[i] <= 'z'||a[i] >= 'A'&& a[i] <= 'Z')&& a[i] != 0)
			;	
		if(a[i] == ' ') {
			if(a[i+1] != 0)
				printf("\n");
			else {
				i++;
				putchar(10);
			  }
			}
			i++;
	  }

 
	putchar(10);
	return 0;
}
