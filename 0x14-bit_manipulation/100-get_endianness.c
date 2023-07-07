#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if the opposite
 */
int get_endianness(void)
{
	unsigned int Y;
	char *ch;

	Y = 1;
	ch = (char *) &Y;

	return ((int)*ch);
}
