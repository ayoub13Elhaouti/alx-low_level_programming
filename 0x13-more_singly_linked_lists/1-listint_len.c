#include "lists.h"

/**
 * listint_len - a linked listint_t list number of elements.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
