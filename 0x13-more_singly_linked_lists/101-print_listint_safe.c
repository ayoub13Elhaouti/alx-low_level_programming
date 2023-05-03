#include "lists.h"
/**
 * _a - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_a(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newls;
	size_t count;

	newls = malloc(size * sizeof(listint_t *));
	if (newls == NULL)
	{
		free(list);
		exit(98);
	}
	for (count = 0; count < size - 1; count++)
		newls[count] = list[count];
	newls[count] = new;
	free(list);
	return (newls);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t idx, nbr = 0;
	const listint_t **ls = NULL;

	while (head != NULL)
	{
		for (idx = 0; idx < nbr; idx++)
		{
			if (head == ls[idx])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(ls);
				return (nbr);
			}
		}
		nbr++;
		ls = _a(ls, nbr, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(ls);
	return (nbr);
}
