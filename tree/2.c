#include <stdio.h>
#include <stdlib.h>

struct node
{
	char item;
	struct node *l, *r;
};
typedef struct node *link;

link root = NULL;

link make_node(char item) 
{
	link p;

	p = malloc(sizeof(*p));
	p->item = item;
	p->l = NULL;
	p->r = NULL;

	return p;
//#include <stdio.h>
}

void traverse(link t)
{
	if (t == NULL)
		return; 
	printf("t->item = %c\n", t->item);
//	printf("demo binary tree!\n");
	traverse(t->l);
	traverse(t->r);

	return;

}

link init(char VLR[], char LVR[], int n)
{
	link t;
	int k;
	if (n <= 0)
		return NULL;
	for (k = 0;	VLR[0] != LVR[k]; k++)
		t = make_node(VLR[0]);
		t->l = init(VLR+1, LVR,k);
		t->r = init(VLR+1,LVR+1+R,n-k-1);
		return t;
}
int main(void)
{
	char pre_seq[] = "4213657";
	char in_seq[] = "1234567";
	root = init(prep_seq, in_seq, 7);
#if 0
	link a, b, c;
	link d, e, f;

//	printf("demo binary tree!\n");

	a = make_node('4');
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

//	printf("demo binary tree!\n");
	traverse(root);

	return 0;
}
