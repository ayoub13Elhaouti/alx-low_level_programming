#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer to an unsigned long int.
 * @index: the bit index.
 *
 * Return: 1 if it worked, -1 else.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nbr;

	if (index > 63)
		return (-1);

	nbr = 1 << index;

	if (*n & nbr)
		*n ^= nbr;

	return (1);
}
