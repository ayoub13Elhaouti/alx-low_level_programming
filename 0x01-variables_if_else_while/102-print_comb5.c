#include <stdio.h>

/**
 *main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0 (SUCCESS).
 */
int	main(void)
{
	int	nbr1;
	int	nbr2;


	for (nbr1 = 0; nbr1 < 100; nbr1++)
	{
		for (nbr2 = 0; nbr2 < 100; nbr2++)
		{
			if (nbr1 < nbr2)
			{
				putchar((nbr1 / 10) + '0');
				putchar((nbr1 % 10) + '0');
				putchar(' ');
				putchar((nbr2 / 10) + '0');
				putchar((nbr2 % 10) + '0');
				if (nbr1 != 98 || nbr2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
