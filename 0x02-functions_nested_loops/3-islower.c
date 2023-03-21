#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @nbr: single letter input
 * Return: 1 if nbr is lowercase, 0 if the opposite
 */
int	_islower(char	nbr)
{
	if (nbr >= 'a' && nbr <= 'z')
		return (1);
	return (0);
}
