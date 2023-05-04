#include "main.h"

/**
 * set_bit - set the value of a bit to 1.
 * at a given index.
 * @n:  unsigned long int pointer.
 * @index: bit index.
 *
 * Return: 1 if it works, else -1 .
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nbr;

	if (index > 63)
		return (-1);

	nbr = 1 << index;
	*n = (*n | nbr);

	return (1);
}
