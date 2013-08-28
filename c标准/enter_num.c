#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct STU{
  char name[20];
  int id;
//  char sex;  //如何用一个字符而非字符串输出?
  char sex[16];
};

/*int main(int argc, char *argv[])
  {
  struct STU  *stu;
//  p = calloc(3,sizeof(struct STU));

return 0;
}
 */

int main(void)
{
  struct STU stu[3];
  char str[100];
  int i, len;

  printf("请输入 name        id        sex\n");
  for (i = 0; i < 3; i++) {
	fgets(str,sizeof(str), stdin);
	len = strlen(str);
	str[len-1] = '\0';
	strcpy(stu[i].name, str);

	fgets(str,100, stdin);
	len = strlen(str);
	str[len-1] = '\0';
	stu[i].id = atoi(str);

/*	fgets(str,100, stdin); //如何用一个字符而非字符串输出?
	stu[i].sex = str[i];
	*/
    fgets(str,sizeof(str), stdin);
	len = strlen(str);
	str[len-1] = '\0';
	strcpy(stu[i].sex, str);

  }

  putchar(10);

  for (i = 0; i < 3; i++){
	// printf("%-8s%-6d%-6c\n", stu[i].name, stu[i].id, stu[i].sex);
	printf("%-6s", stu[i].name); 
	printf("%-6d", stu[i].id);
//	printf("%-6c", stu[i].sex);
	printf("%-6s", stu[i].sex);
	putchar(10);
  }
  putchar(10);

  return 0;
}
