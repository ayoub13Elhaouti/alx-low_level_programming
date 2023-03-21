#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @abs: integer input
 * Return: absolute value of abs
 */

int	_abs(int	abs)
{
	return (abs * ((abs > 0) - (abs < 0)));
}
