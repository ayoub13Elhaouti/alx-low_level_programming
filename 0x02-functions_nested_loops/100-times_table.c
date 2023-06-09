#include "main.h"
/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void	print_times_table(int	n)
{
	int	nbr;
	int	mu;
	int	p;

	if (n >= 0 && n <= 15)
	{
		for (nbr = 0; nbr <= n; nbr++)
		{
			_putchar('0');

			for (mu = 1; mu <= n; mu++)
			{
				_putchar(',');
				_putchar(' ');

				p = nbr * mu;

				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
