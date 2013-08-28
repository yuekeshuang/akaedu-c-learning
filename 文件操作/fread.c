#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	FILE *fp;
	char str[4096];
	char buf[1024];
	int len;

	fp = fopen("abc","w");
	if (fp == NULL) {
		perror("fopen");
		exit(-1);
	  }
	while (len = fread(str, 1, sizeof(buf)*3, stdin)){
		printf("len = %d\n", len);
		fwrite(str, 1, len, fp);
	  } 


//	  while (len = fread(buf,1,sizeof(buf), stdin)) 

		

  fclose(fp);

  return 0;
} 

