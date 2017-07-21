#ifndef __NO_SORT_H__
#define __NO_SORT_H__

#include "common.h"

typedef struct _node
{
	int num;
	struct _node *next;
	struct _node *prev;
} node;

typedef struct _list
{
	node *head;
	node *tail;
	int cnt;
} list;

void init_list(list *pl);
void destroy_list(list *pl);
void insert_list(list *pl, int num);
void print_list(list *pl);
void print_list_reverse(list *pl);
void use_list(void);

#endif
