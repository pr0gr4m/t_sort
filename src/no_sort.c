#include "no_sort.h"

void init_list(list *pl)
{
	pl->head = (node *)malloc(sizeof(node));
	pl->tail = (node *)malloc(sizeof(node));
	pl->head->next = pl->tail;
	pl->head->prev = NULL;
	pl->tail->next = NULL;
	pl->tail->prev = pl->head;
	pl->cnt = 0;
}

void destroy_list(list *pl)
{
	node *del = pl->head, *nxt = pl->head->next;

	while (del != pl->tail)
	{
		del = nxt;
		nxt = nxt->next;

		free(del);
	}

	free(pl->head);
	free(pl->tail);
}

void insert_list(list *pl, int num)
{
	node *find = pl->head->next;
	node *new = (node *)malloc(sizeof(node));
	new->num = num;

	while (find != pl->tail &&
			find->num < num)
	{
		find = find->next;
	}

	new->next = find;
	new->prev = find->prev;
	find->prev->next = new;
	find->prev = new;

	(pl->cnt)++;
}

void print_list(list *pl)
{
	node *pr = pl->head->next;

	while (pr != pl->tail)
	{
		printf(" %d ", pr->num);
		pr = pr->next;
	}
	putchar('\n');
}

void print_list_reverse(list *pl)
{
	node *pr = pl->tail->prev;

	while (pr != pl->head)
	{
		printf(" %d ", pr->num);
		pr = pr->prev;
	}
	putchar('\n');
}

void use_list(void)
{
	list l;
	int len = 0, num;

	init_list(&l);

	printf("Enter a positive digit (negative to quit): \n");
	while (len < ARR_LEN)
	{
		printf(">>");
		scanf("%d", &num);
		if (num < 0)
			break;

		insert_list(&l, num);
	}
	putchar('\n');

	puts("----- NO_SORT -----");
	puts("ascending power >>");
	print_list(&l);

	puts("descending power >>");
	print_list_reverse(&l);

	destroy_list(&l);
}
