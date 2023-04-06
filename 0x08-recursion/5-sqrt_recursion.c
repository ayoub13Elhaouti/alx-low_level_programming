#include "main.h"

/**
 * p_sqrt_recursion - This is my my_sqrt_recursion
 * @a: The entry is equal to n, of the before function
 * @b: This is the sum
 *
 * Return: the result
 */
int p_sqrt_recursion(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (p_sqrt_recursion(a, b + 1));
}

/**
 * _sqrt_recursion - This is my first function
 * @n: This is my value
 *
 * Return: This is my result of the function p_sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (p_sqrt_recursion(n, 0));
}
