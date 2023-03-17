#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
int	main(void)
{
	int	alpha1;
	char	alpha2;


	alpha1 = 0;
	while (alpha1 <= 9)
	{
		putchar(alpha1 + '0');
		alpha1++;
	}
	alpha2 = 'a';
	while (alpha2 <= 'f')
	{
		putchar(alpha2);
		alpha2++;
	}
	putchar('\n');
	return (0);
}
