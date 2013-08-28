#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp1, *fp2;
  char str[128];
  int count_s = 0;
  int count_l = 0;
  int s = 0;
  char *p;

  fp1 = fopen("she.txt", "r");
  fp2 = fopen("count.xt", "w");

  if(fp == NULL) {
	printf("Can not open file\n"); 
	exit(0);
  }

  while (fgets(str, 128, fp1)) {

	p = str;
	for(; *p != '\0'; p++)  {
	  switch(s) {
		case 0: if(*p != 's') {
				;
				else
				  s =1;
				  break;
		}
		case 1: if(*p == 'h' && *(p-1) == 's') {
				  s = 2;
				else
				  s = 0;
				  break;
			  }
		case 2: if(*p == 'e' && *(p-1) == 'h' && *(p-2) == 's') {
					count_s++;
				else
				    s = 0;
					break;
			  }

	  }

	}

  }  
fputc(, fp2);
fclose(fp1);
fclose(fp2);

return 0;
}
