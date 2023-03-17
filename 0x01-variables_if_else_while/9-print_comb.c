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
	int	nbr;

	nbr = 0;
	while (nbr <= 9)
	{
		putchar(nbr + '0');
		if (nbr != 9)
		{
			putchar(',');
			putchar(' ');
		}
		nbr++;
	}
	putchar('\n');
	return (0);
}
