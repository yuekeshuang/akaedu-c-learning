#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  char string[81];
  fp = fopen("file1", "w");

  if(fp == NULL) {
	perror("Can not open file\n");
	exit(-1);
  }
  /*while (strlen(gets(string)) > 0) {
	fputs(string, fp);
	fputs("\n", fp); 
  }
*/
	
  fgets(string, sizeof(string), stdin);
  fputs(string, fp);
  fclose(fp);
  return 0;

}
