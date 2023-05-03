#include "lists.h"
/**
 * reverse_listint - reverse a listint_t
 * @head: double pointer head
 *
 * Return: first node of the reversed list pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prv = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = next;
	}
	*head = prv;
	return (*head);
}
