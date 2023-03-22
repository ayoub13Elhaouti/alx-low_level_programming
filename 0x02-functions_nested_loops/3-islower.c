#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if c is lowercase, 0 if the opposite
 */
int	_islower(int	c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
