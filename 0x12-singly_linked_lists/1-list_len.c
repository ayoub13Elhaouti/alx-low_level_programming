#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the number of elements in a linked list.
 * @h: head of the liked list.
 *
 * Return: number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
