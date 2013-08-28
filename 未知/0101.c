#include <stdio.h>
#include <stdlib.h>

struct node
{
  char item;
  int num;
  struct node * next;
};
typedef struct node * link;

link head = NULL;
int main(void)
{
  link p = NULL;//p是一个四字节指针?
  printf("size of p = %d\n", sizeof(p));
  printf("size of *p = %d\n", sizeof(*p));
  printf("size of *p = %d\n", sizeof(struct node));

  printf("item & = %d\n", &(((link)0)->num));
  
  p = malloc(sizeof(*p));
  p->item = 'a';
  p->next = NULL;

  head = p;

  p = malloc(sizeof(*p));
  p->item = 'b';
  p->next = NULL;

  head->next = p;

  p = malloc(sizeof(*p));
  p->item = 'c';
  p->next = NULL;
  
  head->next->next = p;

  p = head;
  while (p != NULL)
  {
	printf("p->item = %c\n", p->item);
	p = p->next;
  }




  return 0;
}


