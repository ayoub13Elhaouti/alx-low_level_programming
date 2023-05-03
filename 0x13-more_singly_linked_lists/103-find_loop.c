#include "lists.h"

/**
 * find_listint_loop - search for a loop in a linked list.
 * @head: the head of the list pointer
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *st, *bs;

	st = bs = head;
	while (st && bs && bs->next)
	{
		st = st->next;
		bs = bs->next->next;
		if (st == bs)
		{
			st = head;
			break;
		}
	}
	if (!st || !bs || !bs->next)
		return (NULL);
	while (st != bs)
	{
		st = st->next;
		bs = bs->next;
	}
	return (bs);
}
