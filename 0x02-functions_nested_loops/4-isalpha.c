#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @nbr: single letter input
 * Return: 1 if nbr is a letter (lower or uppercase), 0 otherwise
 */
int	_isalpha(char	nbr)
{
	if (((nbr >= 'a') && (nbr <= 'z')) || ((nbr >= 'A') && (nbr <= 'Z')))
		return (1);
	return (0);
}
