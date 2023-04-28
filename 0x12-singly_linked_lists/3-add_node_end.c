#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add new node in the end of the linked list.
 * @head: head of the linked list.
 * @str: string to add.
 *
 * Return: the new node added to linked list pointer.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *tmp;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	tmp = *head;
	n->str = strdup(str);
	n->len = _strlen(str);
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = n;
	return (n);
}

/**
 * _strlen - Calculate lenght of a string.
 * @str: string.
 *
 * Return: lenght of the string str.
 */

int _strlen(const char *str)
{
	int idx = 0;

	for (; str[idx]; idx++)
	;
	return (idx);
}
