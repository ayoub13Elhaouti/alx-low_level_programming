#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: the first node pointer
 * @index: the index of the node
 *
 * Return: pointer of Index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	for (count = 0; count < index; count++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
