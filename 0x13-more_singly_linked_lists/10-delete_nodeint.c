#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index
 * @head: double pointer head
 * @index:  the node index
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *tmp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;
	for (count = 0; count < index - 1; count++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);

}
