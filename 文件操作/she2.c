#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp1, fp2;
  char ch;
  int count_s = 0;
  int count_l = 0;
  int s = 0;

  fp1 = fopen("she.txt", "r");
  fp2 = fopen("count.xt", "w");

  if(fp == NULL) {
	 printf("Can not open file\n"); 
	 exit(0);
	}
  ch = fgetc(fp);
//  while ((ch = getchar()) != '#')
//  fputc(ch, fp);
  while (ch != EOF) {

	switch(s) {
	  for()
	  if () {
		 putchar(ch); 

		  }
	}
   ch = getc(fp);

  }  

  fclose(fp1);
  fclose(fp2);

  return 0;
}
