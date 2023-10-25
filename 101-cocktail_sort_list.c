#include "sort.h"

/**
 * swp - function that swaps two nodes
 * @head: VAR1
 * @node1: VAR2
 * @node2: VAR3
 */
void swp(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prv, *nxt;

	prv = node1->prv;
	nxt = node2->nxt;

	if (prv != NULL)
		prv->nxt = node2;
	else
		*head = node2;
	node1->prv = node2;
	node1->nxt = nxt;
	node2->prv = prv;
	node2->nxt = node1;
	if (nxt)
		nxt->prv = node1;
}
/**
 * cocktail_sort_list - cocktail sort algorithm
 * @list: list to be sorted
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *head;
	int flag = 0;

	if (!list || !*list || !(*list)->nxt)
		return;

	do {
		for (head = *list; head->nxt != NULL; head = head->nxt)
		{
			if (head->n > head->nxt->n)
			{
				swap(list, head, head->nxt);
				print_list(*list);
				flag = 1;
				head = head->prv;
			}
		}
		if (flag == 0)
			break;
		flag = 0;
		for (; head->prv != NULL; head = head->prv)
		{
			if (head->n < head->prv->n)
			{
				swap(list, head->prv, head);
				print_list(*list);
				flag = 1;
				head = head->nxt;
			}
		}
	} while (flag == 1);
}
