#include <stdio.h>
#include <stdlib.h>

static char *stack = NULL;
static int size;
static int top;
static void push(char item)
{
	if (top == size) {
		size += size;
		stack = realloc(stack, size *sizeof(*stack));
	}
	stack[top++] = item;
}

char pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top == 0;
}

int is_full(void)
{
	return top == size;
}

int init_stack(int sz)
{
	size = sz;
	stack = malloc(sz *sizeof(*stack));
	if (!stack)
		return -1;
	return 0;

int main(void)
{
	char ch;
	init_stack(5);
	while ((ch = getchar() != '\n'))
		push(ch);
	while (!is_empty())
		putchar(pop());
//	putchar
	return 0;
}
}

