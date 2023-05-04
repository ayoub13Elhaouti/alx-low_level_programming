#include "main.h"

/**
 * get_bit - return the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: the bit index.
 *
 * Return: the bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx;

	if (n == 0 && index < 64)
		return (0);

	for (idx = 0; idx <= 63; n >>= 1, idx++)
	{
		if (index == idx)
			return (n & 1);
	}

	return (-1);
}
