#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer to an unsigned long int.
 * @index: the bit index.
 *
 * Return: 1 if it worked, -1 else.
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
