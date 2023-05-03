#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: all the data sum
 */
int sum_listint(listint_t *head)
{
	int sigma = 0;

	while (head != NULL)
	{
		sigma += head->n;
		head = head->next;
	}
	return (sigma);
}
