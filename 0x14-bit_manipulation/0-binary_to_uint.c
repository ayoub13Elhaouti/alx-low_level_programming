#include "main.h"

/**
 * binary_to_uint - convert a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int ln, base2;

	if (!b)
		return (0);

	i = 0;

	for (ln = 0; b[ln] != '\0'; ln++)
		;

	for (ln--, base2 = 1; ln >= 0; ln--, base2 *= 2)
	{
		if (b[ln] != '0' && b[ln] != '1')
		{
			return (0);
		}

		if (b[ln] & 1)
		{
			i += base2;
		}
	}

	return (ui);
}
