#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * hrs -> hour, mins -> minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void	jack_bauer(void)
{
	int	hrs;
	int	mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
