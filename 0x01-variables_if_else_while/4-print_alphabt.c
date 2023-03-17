#include <stdio.h>
/**
 * main - prints all the alphabet
 * except q and e
 *
 * Return: 0
 */
/* betty style doc for function main goes there */
int	main(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha != 'e' || alpha != 'q')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
