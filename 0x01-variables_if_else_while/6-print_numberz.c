#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
int	main(void)
{
	int	alpha;

	alpha = 0;
	while (alpha <= 9)
	{
		putchar(alpha + '0');
		alpha++;
	}
	putchar('\n');
	return (0);

}
