#include<stdio.h>
#include <stdlib.h>

struct node
{
  char item;
  int num;
  struct node * next;
};
typedef struct node * link;//  typedef ?

link head = NULL;
int main(void)
{
  link p = NULL;//p是一个四字节指针?
  printf("size of p = %d\n", sizeof(p));
  //printf(" link = %p\n", link);

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
  //printf("%p\n", p->next); //如何打印地址？

  head->next->next = p;
#if 0
  //1. insert d before head
  link d = malloc(sizeof(*d)); //
  d->item = 'd';//
  d->next = head;//
  head =d;//


#endif

#if 0
  //2. insert d after tail
  link tail = NULL;
  //tail = head->next->next;
  p = head;
  while (p != NULL)
  {
	if(p->next == NULL)
	  tail = p;

	p = p->next;
  }

  p = malloc(sizeof(*p));
  p->item = 'd';
  p->next = NULL;

  tail->next = p;
#endif

#if 0
  //3.travel list from head
  link pos = head->next;

  p = malloc(sizeof(*p));
  p->item = 'd';
  // stem 1: d->c
  p->next = pos->next;
  //step 2: b->d
  pos->next = p;

  /*while(1)
	{
	p = p->next;
	if(p->next == pos)
	break;
	}
   */
#endif

#if 0
  //4. insert d before pos node
  link pos = head->next;
  link prev = NULL;

  //search for pos's prev
  p = head;
  while (p != NULL)
  {
	if (p->next == pos)
	{
	  prev = p;
	  break;
	}
	p = p->next;
  }

  p = malloc(sizeof(*p));
  p->item = 'd';
  p->next = pos;

  prev->next = p;
#endif

#if 0
  // 1.delete pos = head
  link pos = head;

  head = pos->next;  //  head = head->next;
  free(pos);
  pos = NULL;
#endif

  //#if 0
  // 2.delete pos != head

  link pos = head->next->next;

  link prev = NULL;
  // search for pos's prev
  p = head;
  while (p != NULL)
  {
	if(p->next == pos)
	  prev = p;
	break;
  }

  //#endif


  //travel list from head
  p = head;
  while (p != NULL)
  {
	printf("p->item = %c\n", p->item);
	//	printf("p->next = %p\n", p->next);
	p = p->next;
  }


  return 0;
}


