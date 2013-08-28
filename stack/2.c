#include <stdio.h>
#include <stdlib.h>

static char*queue;
static int  h, t, qc, size;

void init_queue(int sz)
{
	size = sz;   // 初始化
	queue = malloc(size*sizeof(*queue));
	h = t = qc =0;
}

void destroy(void) //释放队列
{
	free(queue);
}

char dequeue(void)
{
	char ch;
	ch = queue[h++];
	h %= size;
	qc--;

	return ch;
}

void enqueue(char iterm) // 入队
{
	if (is_full()) {
		putchar(dequeue());
	}
	queue[t++] = iterm;
	t %= size;
	qc++;
}


int is_full(void) //判断是否满了？
{
	return qc == size;
}

int is_empty(void)
{
	return qc == 0;
}

int main(void)
{
	char ch;
	init_queue(10); 
	while ((ch = getchar()) != '\n' && !is_full())
		enqueue(ch);
	while (!is_empty())
		putchar(dequeue());
	putchar('\n');

	return 0;
}
