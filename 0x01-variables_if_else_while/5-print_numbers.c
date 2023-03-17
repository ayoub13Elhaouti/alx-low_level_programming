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
		printf("%d", alpha);
		alpha++;
	}
	putchar('\n');
	return (0);

}
