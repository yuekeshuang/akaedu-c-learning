#include <stdio.h>
#include <string.h>

#include "stack.h"

int main(void)
{
	char str[1024] = "3 4 + 2 5 - * 6 +";
	char *p;
	int a, b;
	fgets(str, sizeof(str), stdin);
	init_stack(100);//初始化栈 栈最大放100个元素
	p = strtok(str, " \n");
	if (!p) {
		printf("err input\n");
		return -1;
	}
	push(atoi(p));
	while (p = strtok(NULL, " \n")) {
		switch (*p) {
			case '+':b = pop(), a = pop();push(a+b); break; b接受的是被操作数， 
			case '-':b = pop(), a = pop();push(a-b); break;
			case '*':b = pop(), a = pop();push(a*b); break;
			case '/':b = pop(), a = pop();push(a/b); break;
			default:push(atoi(p));
		}
	}
	printf("res = %d\n", pop());
	destroy_stack();//销毁栈
	return 0;	
}
