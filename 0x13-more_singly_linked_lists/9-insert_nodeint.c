#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at agiven postion
 * @head: double pointer head
 * @idx: the node index
 * @n: new node value
 *
 * Return: the new node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *tmp, *nw;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (count = 0; count < idx - 1 && tmp != NULL; count++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}
	nw->next = tmp->next;
	tmp->next = nw;
	return (nw);
}
