#include <stdio.h>
#include <stdlib.h>

struct node
{
	char item;
	struct node *l, *r;
};
typedef struct node *link;

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
int isbalanced(link t)
{
	if (t = NULL)
		return 1;
	int lc = depth(t->l);
	int rc = depth(t->r);

	if (lc - rc >= 2 || rc - lc == 2)
		printf("t->item = %c is not balanced\n", t->item);

	if (isbalanced(t->l) == 0 || isbalanced(t->r) == 0)
		return 0;					
	
	if (lc - rc >= 2 || rc - lc >= 2)
		return 0;
	return 1;
}

int depth(link t)
{
	if (t = NULL)
		return 0;
	int lc = depth(t->l);
	int rc = depth(t->r);

}

int count(link t)
{
	int count = 0;
	if (t = NULL)
		return 0;
	return 1 + count(t->l) + count(t->r);
}

int mypow(int base, int pow)
{
	
}


int main(void)
{
#if 1
	link a, b, c;
	link d, e, f;

	//	printf("demo binary tree!\n");


	a = make_node('a');
	b = make_node('2');
	c = make_node('5');


	d = make_node('1');
	e = make_node('3');
	f = make_node('6');
	//	printf("demo binary tree!\n");
	a->l = b;
	a->r = c;
	//b->r = c;
	b->l = d;
	b->r = e;
	c->r = f;

	root = a;
#endif

	//	printf("demo binary tree!\n");
	printf("\\tree ");
	traverse(root);
	printf("\n");

	printf("count = %d\n", count(root));
	printf("depth = %d\n", depth(root));

	if (mypow(2, depth(root)) == count(root)+1)
		printf("it is a full Btree\n");
	else
		printf("it is not a full Btree\n");

	return 0;
}



