#include "main.h"

/**
 * get_endianness - the endianness checker
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int y;
	char *ptr;

	y = 1;
	ptr = (char *) &y;

	return ((int)*ptr);
}
