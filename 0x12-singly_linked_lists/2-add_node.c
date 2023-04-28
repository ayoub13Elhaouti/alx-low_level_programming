#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adding new node to a linked list.
 * @head: head of the linked list.
 * @str: string to be added.
 *
 *
 * Return: the new element added to linked list pointer.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = _strlen(str);
	n->next = *head;
	*head = n;
	return (n);
}

/**
 * _strlen - lenght of a string.
 * @str: string.
 *
 * Return: lenght of the string str.
 */

int _strlen(const char *str)
{
	int i = 0;

	for (; str[i]; i++)
	;
	return (i);
}
