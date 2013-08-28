#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  int i = 0, num = 0;
  //printf("%d",argc);
  if(argc < 2){
	printf("./a.out num\n");
	exit(-1);
  }

  num = atoi(argv[1]);
  
  for(i= 0; i < num; i++)
	printf("hello\n");

  return 0;
}
