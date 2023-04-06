#include "main.h"

/**
  * lenght - checks the length of a string
  * @str: the string
  * Return: return the length of the string
**/
int lenght(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + lenght(str + 1));
}

/**
 * checkp - checks if the string is palindrome
 * @i: the index
 * @lg: the length of the string
 * @s: the string
 * Return: 1 if is polindrome or 0 else
**/
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (*(s + i) == *(s + lg))
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (*(s + i) != *(s + lg))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}


/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: is the string
  * Return: return 1 if the string is a palindrome or 0 otherwise
**/
int is_palindrome(char *s)
{
	return (checkp(0, lenght(s) - 1, s));
}
