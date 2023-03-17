#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 0;
	while (nbr1 <= 8)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 9)
		{
			putchar(nbr1 + '0');
			putchar(nbr2 + '0');
			if (nbr1 != 8)
			{
				putchar(',');
				putchar(' ');
			}
			nbr2++;
		}
		nbr1++;
	}
	putchar('\n');
	return (0);
}
