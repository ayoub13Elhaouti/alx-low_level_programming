#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/
int	main(void)
{
	char	alpha1;
	char	alpha2;


	alpha1 = 'a';
	while (alpha1 <= 'z')
	{
		putchar(alpha1);
		alpha1++;
	}
	alpha2 = 'A';
	while (alpha2 <= 'Z')
	{
		putchar(alpha2);
		alpha2++;
	}
	putchar('\n');
	return (0);
}
