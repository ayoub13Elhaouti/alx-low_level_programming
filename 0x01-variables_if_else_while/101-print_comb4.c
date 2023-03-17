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
	int	nbr3;

	nbr1 = 0;
	while (nbr1 <= 7)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 8)
		{
			nbr3 = nbr2 + 1;
			while (nbr3 <= 9)
			{
				putchar(nbr1 + '0');
				putchar(nbr2 + '0');
				putchar(nbr3 + '0');
				if (nbr1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
				nbr3++;
			}
			nbr2++;
		}
		nbr1++;
	}
	putchar('\n');
	return (0);
}
