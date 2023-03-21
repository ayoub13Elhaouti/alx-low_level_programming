#include "main.h"
/**
* print_alphabet - a function that prints the alphabet, in lowercase
*
* Return: (0) Always (Succes)
*/
void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
