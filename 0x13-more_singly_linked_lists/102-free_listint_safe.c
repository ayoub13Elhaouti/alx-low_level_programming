#include "lists.h"

/**
 * _as - memory for an array of pointers reallocation
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 *
 * Return: the new list pointer
 */
listint_t **_as(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newls;
	size_t idx;

	newls = malloc(size * sizeof(listint_t *));
	if (newls == NULL)
	{
		free(list);
		exit(98);
	}
	for (idx = 0; idx < size - 1; idx++)
		newls[idx] = list[idx];
	newls[idx] = new;
	free(list);
	return (newls);
}

/**
 * free_listint_safe - free a listint_t linked list.
 * @head: double pointer to the beginning of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t idx, nbr = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (nbr);
	while (*head != NULL)
	{
		for (idx = 0; idx < nbr; idx++)
		{
			if (*head == list[idx])
			{
				*head = NULL;
				free(list);
				return (nbr);
			}
		}
		nbr++;
		list = _as(list, nbr, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (nbr);
}
