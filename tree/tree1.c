#include <stdio.h>
#include <stdlib.h>

typedef struct node * link;
struct node
{
	char item;
	struct node *l, *r;
};


link root = NULL;

link make_node(char item)	//创建节点 
{
	link p;

	p = malloc(sizeof(*p));
	p->item = item;
	p->l = NULL;
	p->r = NULL;

	return p;
}

void traverse(link t) //遍历
{
	if (t == NULL)
	{
		printf("()");
		return; 
	}
	printf("(%c", t->item);
	//	printf("demo binary tree!\n");
	traverse(t->l);
	traverse(t->r);
	printf(")");

	return;

}

#if 0
int count(link t)
{
	int count = 0;
	if (t = NULL)
		return 0;
	return 1 + count(t->l) + count(t->r);
}
#endif

int main(void)
{
	link a, b, c;
	link d, e, f, g;

	//	printf("demo binary tree!\n");


	a = make_node('a');
	b = make_node('2');
	c = make_node('5');


	d = make_node('1');
	e = make_node('3');
	f = make_node('6');
	g = make_node('g');
	//	printf("demo binary tree!\n");
	a->l = b;
	a->r = c;
	//b->r = c;
	b->l = d;
	b->r = e;
	c->r = f;
	f->r = g;

	root = a;

	//	printf("demo binary tree!\n");
	printf("\\tree ");
	f = make_node('6');
	traverse(root);
	printf("\n");

//	printf("count = %d\n", count(root));

	return 0;
}
