#include "sort.h"
/**
 * insertion_sort_list - funtion that sorts doubly linked list using insertion.
 * @list: var1
 * Return: null.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *p, *pre, *cur, *nex, *hod;

	if (list)
	{
	p = *list;
	while (p)
	{
		cur = p;
		p = p->next;

		while (cur->prev && cur->n < cur->prev->n)
		{
		hod = cur->prev;
		nex = cur->next;
		pre = hod->prev;
		cur->prev = pre;
		if (pre)
			pre->next = cur;
		else
			*list = cur;
		cur->next = hod;
		hod->next = nex;
		hod->prev = cur;
		if (nex)
			nex->prev = hod;
		print_list(*list);
		}
	}
	}
}
