#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void	print_alphabet_x10(void)
{
	char	nbr;
	int	com;

	com = 0;

	while (com < 10)
	{
		for (nbr = 'a'; nbr <= 'z'; nbr++)
		{
			_putchar(nbr);
		}
		com++;
		_putchar('\n');
	}
}
