#include "lists.h"

/**
 * free_listint - free a listint_t list
 *
 * @head: the list head
 *
 * Return: NULL in case of an Error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
