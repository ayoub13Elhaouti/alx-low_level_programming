#include "main.h"

/**
 * get_bit - the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int nbr;

	if (n == 0 && index < 64)
		return (0);

	for (nbr = 0; nbr <= 63; n >>= 1, nbr++)
	{
		if (index == nbr)
		{
			return (n & 1);
		}
	}

	return (-1);
}
