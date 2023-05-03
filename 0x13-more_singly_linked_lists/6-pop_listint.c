#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a double pointer head
 *
 *Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *st;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	st = *head;
	*head = st->next;
	n = st->n;
	free(st);
	return (n);
}
